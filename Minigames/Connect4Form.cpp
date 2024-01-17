#include "Connect4Form.h"

#include<iostream>
#include <list>





public enum CONNECT_4 { NONE = 0, RED = 1, YELLOW = 2 };
int board_Connect4[7][6];
int turn_Connect4 = 0;
int win_Connect4 = 4;
bool won_Connect4 = false;


void printBoard_Connect4() {
	for (int row = 0; row < 7; row++)
	{
		for (int col = 0; col < 6; col++)
		{
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
		if ((row + (r * directionRow) >= 0) && (row + (r * directionRow) < sizeof board_Connect4 / sizeof board_Connect4[0]) && (col + (r * directionCol) >= 0) && (col + (r * directionCol) < sizeof board_Connect4[0] / sizeof(int)))
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
	for (row = 0; row < sizeof board_Connect4 / sizeof board_Connect4[0]; row++)
	{
		if (board_Connect4[(sizeof board_Connect4 / sizeof board_Connect4[0]) -1 -row] [col] == 0) {
			return (sizeof board_Connect4 / sizeof board_Connect4[0]) - 1 - row;
		}
	}
	return row;
}
bool setBoard_Connect4(int col) {

	std::cout << col << std::endl;
	int minRow = getMinCol_Connect4(col);
	std::cout << minRow << std::endl;
	if (minRow < sizeof board_Connect4 / sizeof board_Connect4[0]) {
		turn_Connect4++;
		board_Connect4[minRow][col] = getEnum_Connect4();
		return true;
	}
	return false;
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


System::Void Minigames::Connect4Form::button_Click_Connect4(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ pos = ((Button^)sender)->Name->Split('_');
	std::cout << 1 << std::endl;
	if (setBoard_Connect4(letterToNumber_Connect4(pos[1])) && !won_Connect4) {
		std::cout << 2 << std::endl;
		//((Button^)sender)->Text = getTurn();
		if (getEnum_Connect4() == RED) {

			std::cout << 3 << std::endl;
			((Button^)sender)->FlatAppearance->BorderColor = Color::Red;
			((Button^)sender)->BackColor = Color::Red;
		}
		else {

			((Button^)sender)->FlatAppearance->BorderColor = Color::Yellow;
			((Button^)sender)->BackColor = Color::Yellow;
		}
		won_Connect4 = checkWin(System::Int32::Parse(pos[2]) - 1, letterToNumber_Connect4(pos[1]));
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
