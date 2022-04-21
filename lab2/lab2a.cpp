#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Logan Bolton

int main(){
    const float WINGPRICE = 0.99;
    const float TAX = 8.5;
    int numberWings;
    float beforeTax;
    float totalTax;
    float total;
    cout << "Number of wings: ";
    cin >> numberWings;
    beforeTax = numberWings * WINGPRICE;
    totalTax = beforeTax / 100.0 * TAX;
    total = beforeTax + totalTax;
    cout << endl << "Total Bill: $" << fixed << setprecision(2) << total;


}
