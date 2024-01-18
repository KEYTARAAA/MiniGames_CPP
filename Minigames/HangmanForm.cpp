#include "HangmanForm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <random>
#include <vector>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System::Windows::Forms;
string word;
vector<string> words = {};
const int MAX_LIVES = 5;
int lives = 5;
int lettersGot = 0;
bool over = false;


void readList() {
    string line;
    ifstream myfile(".\\words.txt");
    if (myfile.is_open())
    {
        while (myfile.good())
        {
            getline(myfile, line);
            words.push_back(line);
        }
        myfile.close();
    }
    else {
        cout << "NOT FILE" << endl;
    }
}
void Minigames::HangmanForm::reset_Hangman()
{
    lives = MAX_LIVES;
    over = false;
    lettersGot = 0;
    readList();
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(0, words.size() - 1);
    while (word.size() < 3 || word.size() > 7)
    {
        word = words[distr(eng)];
        
        cout << word << " -> " << word.length() <<  endl;
    }
    setButtons();
}

void Minigames::HangmanForm::setButtons()
{
    for (int i = 0; i < 7 ;i++) {
        if (i >= word.length()) {
            cout << (i+1) << " >= " << word.length() << endl;
            Button^ button = ((Button^)Controls->Find("button_guess_" + (i + 1), true)[0]);
            button->Hide();
        }
        
    }
}
void Minigames::HangmanForm::setButton(int index)
{
    Button^ button = ((Button^)Controls->Find("button_guess_" + (index + 1), true)[0]);
    button->Text = gcnew String(word.substr(index,1).data());//[index].ToString();
    lettersGot++;
    if (lettersGot == word.length()) {
        over = true;
    }
}
void Minigames::HangmanForm::loseLife()
{
    lives--;


    Button^ button = ((Button^)Controls->Find("button_life_" + (abs(lives - MAX_LIVES)), true)[0]);
    button->Text = "";

    if (lives == 0) {
        over = true;
    }
}

vector<int> findLocation(string sample, char findIt)
{
    vector<int> characterLocations;
    for (int i = 0; i < sample.size(); i++)
        if (sample[i] == findIt)
            characterLocations.push_back(i);

    return characterLocations;
}

System::Void Minigames::HangmanForm::button_Click_Hangman(System::Object^ sender, System::EventArgs^ e)
{
    if (over) {
        return;
    }
    Button^ button = ((Button^)sender);
    string letter = msclr::interop::marshal_as<std::string>(button->Text);
    button->Hide();
    
    cout << letter << endl;
    if (word.find(letter) != string::npos) {
        vector<int> positions = findLocation(word, letter[0]);
        cout << positions.size() << endl;
        for (int i = 0; i < positions.size(); i++) {
            setButton(positions[i]);
        }
    }
    else {
        loseLife();

    }
}



