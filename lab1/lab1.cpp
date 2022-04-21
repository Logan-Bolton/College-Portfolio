#include <iostream>
using namespace std;
//Logan Bolton

int main(){
    float celc;
    float faren;
    cout << "Please insert a temperature in celcius: ";
    cin >> celc;
    faren = (celc * (9.0/5.0)) + 32.0;
    cout << "converted to Fahrenheit: " << faren;
    return 0;
}