#include <iostream>
#include <random>
#include <Ctime>
using namespace std;

main(){
    srand(time(NULL));
    int randomN;
    int guess;
    char looper = 'y'; //looper? i hardly know 'er
    int tries;
    

    while (looper == 'y'){
        randomN = rand() % (100) + 1;
        
        do {
            
            cout << "please guess a number between 1 and 100: ";
            
            cin >> guess;
            //input validation
            while (guess < 1 || guess > 100){
                cout << "That is not between 1 and 100. Please guess a number between 1 and 100: ";
                cin >> guess;
                cout << endl;
            }
            
            //checks if guess is too high, low, or on target
            if (guess == randomN){
                cout << "good job! you win!" << endl << "You took " << tries << " tries!" << endl;

            }
            if (guess < randomN){
                cout << "your guess is too low" << endl;
                tries += 1;
            }
            if (guess > randomN){
                cout << "Your guess is too high" << endl;
                tries += 1;
            }

        }
        while (randomN != guess);

        //asks if the player would like to play again
        cout << "Would you like to play again? (y/n)" << endl;
        cin >> looper;
        if (looper == 'n' || looper == 'N'){
            break;
        }


        
    }
    return 0;
}