#include <iostream>
using namespace std;
//logan bolton

int main(){
    int hoursPhone;
    int hoursStudy;
    //gets inputs
    cout << "Rounding to the nearest hour, how many hours is you daily average PHONE screen time?" << endl;
    cout << "AVG DAILY SCREEN-TIME HOURS: ";
    cin >> hoursPhone;
    cout << endl << endl;
    cout << "Rounding to the nearest hour, how many hours is your daily average study or homework time?" << endl;
    cout << "AVG DAILY STUDY or HOMEWORK HOURS: ";
    cin >> hoursStudy;
    cout << endl << endl;
    
    //logic and output
    if (hoursPhone <= 2 && hoursStudy >= 6)
    cout << "You need to socialize with people more often";
    else if (hoursPhone > 2 && hoursStudy >= 6)
    cout << "You need to socialize with people more often and get off that phone.";
    else if (hoursPhone <= 2 && hoursStudy >= 2 && hoursStudy < 6)
    cout << "You manage your time well.";
    else if (hoursPhone > 2 && hoursStudy < 6)
    cout << "What are you going to do if you lose that phone?  It is interfering with your ability to have a real life.";

    return 0;
}