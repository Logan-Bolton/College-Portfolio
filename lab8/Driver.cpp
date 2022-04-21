#include "elephant.h"
#include "loglib.h"
using namespace std;


int main(){
    char zoo[100];
    string elephantNames[SIZE];
    float elephantFood[SIZE];
    float foodTotal;
    float foodAverage;
    int elephantMax;
    cout << "Please enter the name of your zoo: ";
    cin.getline(zoo, 100);
    cout << endl;
    Get_Elephant_Data(elephantNames, elephantFood);
    Get_Stats(elephantFood, foodTotal, foodAverage, elephantMax);
    
    cout << "-------------------------------" << endl;
    cout << "The total amount of food consumed by all 10 elephants at " << zoo << " is " << foodTotal << " pounds in one month." << endl << endl;
    cout << "The average amount of food consumed at " << zoo << " is " << foodAverage << " pounds." << endl << endl;
    cout << "The elephant who eats the most (" << elephantFood[elephantMax] << ") is " << elephantNames[elephantMax] << "!!" << endl;
    cout << "-------------------------------" << endl;
}