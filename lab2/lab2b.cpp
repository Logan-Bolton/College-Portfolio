#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
//Logan Bolton

int main(){
    //never had a program with this many variables before but
    //it works well in my head
    const float TAX = 9.75;
    string firstItem;
    string secondItem;
    float firstItemPrice;
    float secondItemPrice;
    int firstItemAmmount;
    int secondItemAmmount; 
    float firstItemTotal;
    float secondItemTotal;
    float beforeTax;
    float totalTax;
    float grandTotal;

    //first item
    cout << "Please input the name of the first item: ";
    getline(cin, firstItem);
    cout << "Please enter the number of " << firstItem << " bought: ";
    cin >> firstItemAmmount;
    cout << "Please enter the price for " << firstItem << ": ";
    cin >> firstItemPrice;
    cout  << endl << endl;
    firstItemTotal = firstItemAmmount * firstItemPrice;

    //second item
    cout << "Please input the name of the second item: ";
    cin.ignore();
    getline(cin, secondItem);
    cout << "Please enter the number of " << secondItem << " bought: ";
    cin >> secondItemAmmount;
    cout << "Please enter the price for " << secondItem << ": ";
    cin >> secondItemPrice;
    secondItemTotal = secondItemAmmount * secondItemPrice;
    
    //processing total
    beforeTax = secondItemTotal + firstItemTotal;
    totalTax = beforeTax / 100.0 * TAX;
    grandTotal = beforeTax + totalTax;

    cout << "Your total is: $" << fixed << setprecision(2) << grandTotal;


}