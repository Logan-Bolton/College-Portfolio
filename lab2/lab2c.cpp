#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
//Logan Bolton

int main(){
    string studentName;
    float test1;
    float test2;
    float test3;
    float testTotal;
    float average;

    cout << "Enter name of student: ";
    getline (cin, studentName);
    cout << "Enter " << studentName << "'s first test grade: ";
    cin >> test1;
    cout << "Enter " << studentName << "'s second test grade: ";
    cin >> test2;
    cout << "Enter " << studentName << "'s third test grade: ";
    cin >> test3;

    testTotal = test1 + test2 + test3;
    average = testTotal / 3;
    cout << studentName << " has a test average of: " << average;


}