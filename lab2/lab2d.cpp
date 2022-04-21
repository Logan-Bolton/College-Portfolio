#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
//Logan Bolton

int main(){
    int bonesStolen;
    const int DAYS = 83;
    int daysInPrison;
    float years;

    cout << "How many bones have you stolen? ";
    cin >> bonesStolen;
    daysInPrison = bonesStolen * DAYS;
    years = daysInPrison / 365.0;
    cout << "For your crimes you are sentenced to " << daysInPrison << " days in prison which is " << years << " years";
}