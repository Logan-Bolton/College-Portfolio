#include "elephant.h"
using namespace std;

void Get_Elephant_Data(string elephantNames[], float elephantFood[]){
    for (int i = 0; i < SIZE - 1; i++ ){
        cout << "ELEPHANT " << i + 1 << ": " << endl;
        cout << "NAME: ";
        cin.ignore();
        getline(cin, elephantNames[i]);
        cout << endl << "FOOD AMOUNT: ";
        cin >> elephantFood[i];
    }
}


void Get_Stats(float elephantFood[], float& total, float& average, int& largest){
    total = 0;
    largest = 0;
    for (int i = 0; i < SIZE; i++){
        total += elephantFood[i];
        if (largest < elephantFood[i]){
            largest = i;
        }
    }
    average = total / SIZE;
    
} 