#include <iostream>
using namespace std;

int ascii_art(){ //ascii art (this took me way too long to get it to work)
    cout << "....................../`-/)" << endl << "....................,/-../" << endl << ".................../..../" << endl << "............./`-/'...'/`--`·," << endl << "........../'/.../..../......./¨-\\ " << endl << "........('(...'...'.... -~/'...')" << endl << ".........\\.................'...../" << endl << "..........''...\\.......... _.·'" << endl << "............\\..............(" << endl << "..............\\.............\\..." << endl;
    
    
    
    return 0;
    
}
int enter_sick_days(){
    int sickDays = 0;
    int numberTellers = 0;
    int placeholderTellers = 0;
    int placeholderSickDays = 0;
    int tellerOn = 1;
    
    cout << "Please enter the number of tellers: ";
    cin >> numberTellers;
    cout << endl;

    while (placeholderTellers < numberTellers){
        cout << endl << "Please enter the number of sick days for teller " << tellerOn << " in year 1: ";
        cin >> placeholderSickDays;
        sickDays += placeholderSickDays;
        placeholderSickDays = 0;


        cout << endl << "Please enter the number of sick days for teller " << tellerOn << " in year 2: ";
        cin >> placeholderSickDays;
        sickDays += placeholderSickDays;
        placeholderSickDays = 0;


        cout << endl << "Please enter the number of sick days for teller " << tellerOn << " in year 3: ";
        cin >> placeholderSickDays;
        sickDays += placeholderSickDays;
        placeholderSickDays = 0;


        tellerOn++;
        placeholderTellers++;
    

    }
    cout << "The " << numberTellers << " tellers were out sick for a total of " << sickDays << " days during the last 3 years" << endl;


    return 0;
    
}


int main(){
    int choice;
    int looper = 1;
    int coolMessage = 0;
    cout << "----------------------------------------" << endl << "Welcome to the Coin Universal Mainframe" << endl << "----------------------------------------" << endl << endl;
   while (looper == 1){
        cout << "Please choose from the menu below:" << endl << endl;
        cout << "1) Enter goblin sick days \n";
        cout << "2) Display something cool \n";
        cout << "3) End the program \n";
        cout << "Please enter your coice: ";
        cin >> choice;
        cout << endl;

        while (choice < 1 || choice > 3){           //input validation
            cout << "Please enter a number between 1 and 3: ";
            cin >> choice;
            cout << endl;
        }

        switch (choice){
            case 1:
                enter_sick_days();  //goblin sick days part
                break;
            case 2:
                ascii_art();    //displays ascii art
                coolMessage++;
                //cout << coolMessage << endl;
                break;
            case 3:
                looper = 0; // ends program
                cout << "You got the finger " << coolMessage << " times." << endl << endl << "Bye!";
            
        } 

   }
}