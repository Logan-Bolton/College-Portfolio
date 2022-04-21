#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Program2.cpp
//Logan Bolton
//3/2/2022
//Plays a game of M.A.S.H

bool displayMenuGetChoice(){ //asks the user if they want to play mash or not and returns true/false
    int choice;
    cout << "Would you like to:" << endl << "1) Play M.A.S.H." << endl << "2) End program" << endl;
    cin >> choice;

    while (choice < 1 || choice > 2){ //input validation
        cout << "Please enter a either 1 and 2: ";
        cin >> choice;
        cout << endl;
    }

    switch(choice){
        case 1:
            return (true);
        case 2:
            return exit;
    }
    return (false); //no idea why, but it wont compile without this here, so its staying.
                    //I dont think the program can get here as is, so its fine
}

int randomGen(int high, int low){
    int randomN;
    randomN = rand() % (high - low + 1) + low;
    return (randomN);
}

int main(){
    string person1;
    string person2;//people
    string person3;
    string loc1;
    string loc2;//locations
    string loc3;
    string job1;
    string job2;//jobs
    string job3;
    string comp1;
    string comp2;//companies
    string comp3;
    string car1;
    string car2;//cars
    string car3;
    int num1;
    int num2;//first 3 nums
    int num3;
    int num4;
    int num5;//last 3 nums
    int num6;
    bool looper; //looper? I hardly know 'er

    //output variables
    string outputStr;
    int outputInt;
    string live;
    int randomN;
    int salary;
    string jobTitle;

   
    srand(time(0));
    do {
        looper = displayMenuGetChoice(); 
        
        cout << "----------------------------------" << endl << "Welcome to M.A.S.H!" << endl << "----------------------------------" << endl << endl;
        cout << "There will be a series of questions, please answer honestly." << endl << endl;
        


        //people
        cout << "Name 3 people (2 you like and 1 you dont like)" << endl;

        cout << "Person 1: ";
        cin.ignore();
        getline(cin, person1);
        cout << endl;
        //cout << person1 << endl;

        cout << "Person 2: ";
        getline(cin, person2);
        cout << endl;
        //cout << person2 << endl;

        cout << "Person 3: ";
        getline(cin, person3);
        cout << endl;
        //cout << person3 << endl;



        //Numbers1
        cout << "Input 3 numbers between 1 and 100" << endl;

        cout << "First number: ";
        cin >> num1;
        cout << endl;
        //cout << person1 << endl;
        while (num1 < 1 || num1 > 100){
            cout << "Please enter a number between 1 and 100: ";
            cin >> num1;
            cout << endl;
        }

        cout << "Second number: ";
        cin >> num2;
        cout << endl;
        //cout << person2 << endl;
        while (num2 < 1 || num2 > 100){
            cout << "Please enter a number between 1 and 100: ";
            cin >> num2;
            cout << endl;
        }

        cout << "Third number: ";
        cin >> num3;
        cout << endl;
        //cout << person3 << endl;
        while (num2 < 1 || num2 > 100){
            cout << "Please enter a number between 1 and 100: ";
            cin >> num2;
            cout << endl;
        }

        

        //locations
        cout << "Name 3 locations including city and state (2 you like and 1 you dont like)" << endl;
        

        cout << "Location 1: ";
        cin.ignore();
        getline(cin, loc1);
        cout << endl;
        //cout << person1 << endl;

        cout << "Location 2: ";
        getline(cin, loc2);
        cout << endl;
        //cout << person2 << endl;

        cout << "Location 3: ";
        getline(cin, loc3);
        cout << endl;
        //cout << person3 << endl;



        //jobs
        cout << "Name 3 job titles (2 you like and 1 you dont like)" << endl;

        cout << "Job 1: ";
        getline(cin, job1);
        cout << endl;
        //cout << person1 << endl;

        cout << "Job 2: ";
        getline(cin, job2);
        cout << endl;
        //cout << person2 << endl;

        cout << "Job 3: ";
        getline(cin, job3);
        cout << endl;
        //cout << person3 << endl;
        



        //companies
        cout << "Name 3 companies (2 you like and 1 you dont like)" << endl;

        cout << "Company 1: ";
        getline(cin, comp1);
        cout << endl;
        //cout << person1 << endl;

        cout << "Company 2: ";
        getline(cin, comp2);
        cout << endl;
        //cout << person2 << endl;

        cout << "Company 3: ";
        getline(cin, comp3);
        cout << endl;
        //cout << person3 << endl;



        //numbers 2, electric boogaloo
        cout << "List 3 new numbers between 10000 and 500000" << endl;

        cout << "Number 1: ";
        cin >> num4;
        cout << endl;
        //cout << person1 << endl;
        while (num4 < 10000 || num4 > 500000){
            cout << "Please enter a number between 10000 and 500000: ";
            cin >> num4;
            cout << endl;
        }
        
        
        cout << "Number 2: ";
        cin >> num5;
        cout << endl;
        //cout << person2 << endl;
        while (num5 < 10000 || num5 > 500000){
            cout << "Please enter a number between 10000 and 500000: ";
            cin >> num5;
            cout << endl;
        }

        cout << "Number 3: ";
        cin >> num6;
        cout << endl;
        //cout << person3 << endl;
        while (num6 < 10000 || num6 > 500000){
            cout << "Please enter a number between 10000 and 500000: ";
            cin >> num6;
            cout << endl;
        }


        //cars
        cout << "Name 3 types of cars (2 you like and 1 you dont like)" << endl;

        cout << "Car 1: ";
        cin.ignore();
        getline(cin, car1);
        cout << endl;
        //cout << person1 << endl;

        cout << "Car 2: ";
        getline(cin, car2);
        cout << endl;
        //cout << person2 << endl;

        cout << "Car 3: ";
        getline(cin, car3);
        cout << endl;
        //cout << person3 << endl;



        //output
        randomN = randomGen(1, 4);
        switch (randomN){
            case 1:
                live = "Mansion";
                break;
            case 2:
                live = "Apartment";
                break;                          //M.A.S.H.
            case 3:
                live = "Shack";
                break;
            case 4:
                live = "House";
        }
        cout << "you will live in a " << live << endl;

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                outputStr = person1;
                break;
            case 2:
                outputStr = person2;            //married to
                break;
            case 3:
                outputStr = person3;
                break;
        }
        cout << "You will be married to " << outputStr << endl;

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                outputInt = num1;
                break;
            case 2:
                outputInt = num2;            //number of kids
                break;
            case 3:
                outputInt = num3;
                break;
        }
        cout << "You will have " << outputInt << " kids" << endl;

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                outputStr = loc1;
                break;
            case 2:
                outputStr = loc2;            //live in location
                break;
            case 3:
                outputStr = loc3;
                break;
        }
        cout << "You will live in " << outputStr << endl;  

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                jobTitle = job1;
                break;
            case 2:
                jobTitle = job2;            //job title
                break;
            case 3:
                jobTitle = job3;
                break;
        }

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                outputStr = comp1;
                break;
            case 2:
                outputStr = comp2;            //location
                break;
            case 3:
                outputStr = comp3;
                break;
        }

        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                salary = num4;
                break;
            case 2:
                salary = num5;            //salary
                break;
            case 3:
                salary = num6;
                break;
        }
        cout << "You will work at " << outputStr << " as a " << jobTitle << " making $" << salary << " a year" << endl;
        
        randomN = randomGen(1, 3);
        switch (randomN){
            case 1:
                outputStr = car1;
                break;
            case 2:
                outputStr = car2;            //car
                break;
            case 3:
                outputStr = car3;
                break;
        }
        cout << "You will drive a " << outputStr << endl;



    } while (looper == true);
    
    return(0);
}

