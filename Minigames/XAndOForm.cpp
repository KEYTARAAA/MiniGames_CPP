#include "XAndOForm.h"
#include<iostream>
#include <list>





public enum X_AND_O { NONE = 0, X = 1, O = 2 };
int board_XAndO[3][3] = { {NONE,NONE,NONE},{NONE,NONE,NONE},{NONE,NONE,NONE} };
int turn_XAndO = 0;
int win_XAndO = 3;
bool won_XAndO = false;


void printBoard_XAndO() {
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			std::cout << board_XAndO[row][col] << " ";
		}
		std::cout << std::endl;
	}
}
bool checkTie_XAndO()
{
	for (int* i : board_XAndO) {
		if (i == 0) {
			return false;
		}
	}
	return true;
}
	  bool checkWinPattern_XAndO(int row, int col, int directionRow, int directionCol)
	  {
		  int player = board_XAndO[row][ col];

		  std::list<int> rows, cols;
		  for (int r = (-win_XAndO +1); r < win_XAndO; r++)
		  {
			  if ((row + (r * directionRow) >= 0) && (row + (r * directionRow) < sizeof board_XAndO / sizeof board_XAndO[0]) && (col + (r * directionCol) >= 0) && (col + (r * directionCol) < sizeof board_XAndO[0] / sizeof(int)))
			  {
				  if ((board_XAndO[row + (directionRow * r)][ col + (directionCol * r)] == player))
				  {
					  rows.push_back(row + (directionRow * r));
					  cols.push_back(col + (directionCol * r));
				  }
				  else
				  {
					  rows.clear();
					  cols.clear();
				  }
				  if (rows.size() == win_XAndO)
				  {
					  return true;
				  }
			  }
		  }
		  return false;
	  }
	  bool checkWin_XAndO(int row, int col)
	  {
		  printBoard_XAndO();
		  if (checkWinPattern_XAndO(row, col, 1, 0) || checkWinPattern_XAndO(row, col, -1, 0) ||
			  checkWinPattern_XAndO(row, col, 0, 1) || checkWinPattern_XAndO(row, col, 0, -1) ||
			  checkWinPattern_XAndO(row, col, 1, 1) || checkWinPattern_XAndO(row, col, -1, 1) ||
			  checkWinPattern_XAndO(row, col, -1, -1) || checkWinPattern_XAndO(row, col, 1, -1))
		  {
			  return true;
		  }
		  else if (checkTie_XAndO())
		  {

			  return false;
		  }
		  return false;
	  }




System::String^ getTurn_XAndO() {
	if (turn_XAndO % 2 == 1) {
		return "X";
	}
	return "O";
}
X_AND_O getEnum_XAndO() {
	if (turn_XAndO % 2 == 1) {
		return X_AND_O::X;
	}
	return X_AND_O::O;
}
bool setBoard_XAndO(int x, int y) {
	if (board_XAndO[x][y] == 0) {
		turn_XAndO++;
		board_XAndO[x][y] = getEnum_XAndO();
		return true;
	}
	return false;
}


int letterToNumber_XAndO(System::String^ letter) {
	if (letter->Equals("A")) {
		return 0;
	}
	else if (letter->Equals("B")) {
		return 1;
	}
	return 2;
}


System::Void Minigames::XAndOForm::button_Click_XAndO(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ pos = ((Button^)sender)->Name->Split('_');
		if (setBoard_XAndO(System::Int32::Parse(pos[2])-1, letterToNumber_XAndO(pos[1])) && !won_XAndO) {
			((Button^)sender)->Text = getTurn_XAndO();
			if (getEnum_XAndO() == X) {
				((Button^)sender)->FlatAppearance->BorderColor = Color::Magenta;
				((Button^)sender)->ForeColor = Color::Magenta;
			}
			else {

				((Button^)sender)->FlatAppearance->BorderColor = Color::Lime;
				((Button^)sender)->ForeColor = Color::Lime;
			}
			won_XAndO = checkWin_XAndO(System::Int32::Parse(pos[2]) - 1, letterToNumber_XAndO(pos[1]));
			if (won_XAndO) {
				label1->Text = getTurn_XAndO() + "  WINS! :D";
				if (getEnum_XAndO() == X) {
					label1->ForeColor = Color::Magenta;
				}
				else {

					label1->ForeColor = Color::Lime;
				}
			}
		}

		return;

}

void Minigames::XAndOForm::reset_XAndO()
{
	for (int x = 0; x < sizeof board_XAndO / sizeof board_XAndO[0]; x++) {
		for (int y = 0; y < sizeof board_XAndO[0] / sizeof(int); y++) {
			board_XAndO[x][y] = NONE;
		}
	}
	turn_XAndO = 0;
	won_XAndO = false;
}





