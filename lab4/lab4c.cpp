#include <iostream>
using namespace std;

int main(){
    char character = 'n';
    int integer = 0;
    while (character == 'n' || integer != 22){
        //keeps loop going if they didnt enter "n"
        character = 'n';
        cout << "What do you get if you add 4 + 18? ";
        cin >> integer;
        cout << endl;
        cout << "Enter the letter 'y' if you want to quit. " << endl;
        cin >> character;
        cout << endl << "you have entered: " << character << endl;

        //failure message
        if (character == 'y' && integer != 22){
            cout << "Oh goat foot!  You forgot how to add!" << endl;
        }
    }
    return 0;
}