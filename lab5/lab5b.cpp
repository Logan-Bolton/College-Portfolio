#include <iostream>
using namespace std;

int main(){
    int numberRows;
    //UI stuff
    cout << "Please eneter the number of rows you want in the pyramid: ";
    cin >> numberRows;
    //input validation
    while (numberRows < 2){
        cout << "Please enter a number greater than 2" << endl;
        cin >> numberRows;
    }
    //used for the number of rows
    for (int rows = 0; rows < numberRows; rows++){
        
        //spaces before dollar signs
        for (int spaces = 0; spaces < numberRows - rows; spaces++)
        cout << " ";
        //dollar signs
        for (int dollarSigns = 0; dollarSigns < rows; dollarSigns++){
            cout << "$ ";
        }
        cout << endl;
    }


    return 0;
}