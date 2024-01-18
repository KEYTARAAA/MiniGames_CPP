#include "Connect4Form.h"

#include<iostream>
#include<string>
#include <list>



using namespace System::Windows::Forms;


public enum CONNECT_4 { NONE = 0, RED = 1, YELLOW = 2 };
const int HEIGHT_Connect4 = 6;
const int WIDTH_Connect4 = 7;
int board_Connect4[HEIGHT_Connect4][WIDTH_Connect4];
int turn_Connect4 = 0;
int win_Connect4 = 4;
bool won_Connect4 = false;


void printBoard_Connect4() {
	for (int row = 0; row < HEIGHT_Connect4; row++) {
		for (int col = 0; col < WIDTH_Connect4; col++) {
			std::cout << board_Connect4[row][col] << " ";
		}
		std::cout << std::endl;
	}
}
bool checkTie_Connect4()
{
	for (int* i : board_Connect4) {
		if (i == 0) {
			return false;
		}
	}
	return true;
}
bool checkWinPattern_Connect4(int row, int col, int directionRow, int directionCol)
{
	int player = board_Connect4[row][col];
	std::list<int> rows, cols;
	for (int r = (-win_Connect4 + 1); r < win_Connect4; r++)
	{
		if ((row + (r * directionRow) >= 0) && (row + (r * directionRow) < HEIGHT_Connect4) && (col + (r * directionCol) >= 0) && (col + (r * directionCol) < WIDTH_Connect4))
		{
			if ((board_Connect4[row + (directionRow * r)][col + (directionCol * r)] == player))
			{
				rows.push_back(row + (directionRow * r));
				cols.push_back(col + (directionCol * r));
			}
			else
			{
				rows.clear();
				cols.clear();
			}
			if (rows.size() == win_Connect4)
			{
				return true;
			}
		}
	}
	return false;
}
bool checkWin(int row, int col)
{
	printBoard_Connect4();
	if (checkWinPattern_Connect4(row, col, 1, 0) || checkWinPattern_Connect4(row, col, -1, 0) ||
		checkWinPattern_Connect4(row, col, 0, 1) || checkWinPattern_Connect4(row, col, 0, -1) ||
		checkWinPattern_Connect4(row, col, 1, 1) || checkWinPattern_Connect4(row, col, -1, 1) ||
		checkWinPattern_Connect4(row, col, -1, -1) || checkWinPattern_Connect4(row, col, 1, -1))
	{
		return true;
	}
	else if (checkTie_Connect4())
	{

		return false;
	}
	return false;
}




System::String^ getTurn_Connect4() {
	if (turn_Connect4 % 2 == 1) {
		return "RED";
	}
	return "YELLOW";
}
CONNECT_4 getEnum_Connect4() {
	if (turn_Connect4 % 2 == 1) {
		return CONNECT_4::RED;
	}
	return CONNECT_4::YELLOW;
}
int getMinCol_Connect4(int col) {
	int row = 0;
	for (row = HEIGHT_Connect4 -1; row >= 0; row--)
	{
		if (board_Connect4[row] [col] == 0) {
			return row;
		}
	}
	return -1;
}
int setBoard_Connect4(int col) {
	int minRow = getMinCol_Connect4(col);
	if (minRow != -1) {
		turn_Connect4++;
		board_Connect4[minRow][col] = getEnum_Connect4();
	}
	return minRow;
}


int letterToNumber_Connect4(System::String^ letter) {
	if (letter->Equals("A")) {
		return 0;
	}
	else if (letter->Equals("B")) {
		return 1;
	}
	else if (letter->Equals("C")) {
		return 2;
	}
	else if (letter->Equals("D")) {
		return 3;
	}
	else if (letter->Equals("E")) {
		return 4;
	}
	else if (letter->Equals("F")) {
		return 5;
	}
	return 6;
}
std::string NumberToLetter_Connect4(int number) {
	if (number == 0) {
		return "A";
	}
	else if (number == 1) {
		return "B";
	}
	else if (number == 2) {
		return "C";
	}
	else if (number == 3) {
		return "D";
	}
	else if (number == 4) {
		return "E";
	}
	else if (number == 5) {
		return "F";
	}
	return "G";
}


System::Void Minigames::Connect4Form::button_Click_Connect4(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ pos = ((Button^)sender)->Name->Split('_');
	int col = letterToNumber_Connect4(pos[1]);
	int row = setBoard_Connect4(col);
	if ((row != -1) && !won_Connect4) {
		colorButton_Connect4(row, col);
		won_Connect4 = checkWin(row , col);
		if (won_Connect4) {
			/*label1->Text = getTurn() + "  WINS! :D";
			if (getEnum() == X) {
				label1->ForeColor = Color::Magenta;
			}
			else {

				label1->ForeColor = Color::Lime;
			}*/
		}
	}

	return;

}

void Minigames::Connect4Form::reset_Connect4()
{
	for (int x = 0; x < sizeof board_Connect4 / sizeof board_Connect4[0]; x++) {
		for (int y = 0; y < sizeof board_Connect4[0] / sizeof(int); y++) {
			board_Connect4[x][y] = NONE;
		}
	}
	turn_Connect4 = 0;
	won_Connect4 = false;
}

void Minigames::Connect4Form::colorButton_Connect4(int row, int col)
{
	String^ name = gcnew String(  (  "button_" + NumberToLetter_Connect4(col) +"_" + std::to_string(std::abs(row -6) ) ).c_str() );
	Button^ button = ((Button^)Controls->Find(name, true)[0]);

	if (getEnum_Connect4() == RED) {
		button->FlatAppearance->BorderColor = Color::Red;
		button->BackColor = Color::DarkRed;
		if (checkWin(row,col)) {
			label1->ForeColor = Color::Red;
			label1->Text = "RED WINS! :D";
		}
	}
	else {

		button->FlatAppearance->BorderColor = Color::Yellow;
		button->BackColor = Color::Goldenrod;
		if (checkWin(row, col)) {
			label1->ForeColor = Color::Yellow;
			label1->Text = "YELLOW WINS! :D";
		}
	}
}

