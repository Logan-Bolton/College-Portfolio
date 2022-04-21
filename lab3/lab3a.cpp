#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Logan Bolton

int main(){
    string name;
    int numberShirts;
    const float SHIRTPRICE = 19.99;
    const float TAX = 0.0975;
    float shirtTotal;
    float discount;
    float beforeTax;
    float individualPrice;
    float total;
    
    //first part of UI and shirt input
    cout << "Welcome to Geek Life store! What is your name? " << endl;
    getline(cin, name);
    cout << endl << "Shirt price: " << SHIRTPRICE << endl;
    cout << "Bulk discounts:" << endl << endl;
    cout << "Number of shirts:" << setw(20) << "Discount:" << endl << "5-10" << setw(36) << "10%" << endl << "11-20" << setw(35) << "15%" << endl << "21-30" << setw(35) << "20%" << endl << "31 or more" << setw(30) << "25%" << endl;
    cout << name << ", how many shirts would you like to order?" << endl;
    cin >> numberShirts;
    shirtTotal = numberShirts * SHIRTPRICE;
    //input validation
    while (numberShirts < 1){
        cout << "Invalid answer, please enter a non-negative integer: ";
        cin >> numberShirts;
    }

    //calculates total with discounts
    if (numberShirts >= 5 && numberShirts <= 10){
        discount = 0.1 * shirtTotal;
        beforeTax = shirtTotal - discount;
        total = beforeTax + (TAX * beforeTax);
        individualPrice = 17.99;
        //cout << total;
    }
    else if (numberShirts >= 11 && numberShirts <= 20){
        discount = 0.15 * shirtTotal;
        beforeTax = shirtTotal - discount;
        total = beforeTax + (TAX * beforeTax);
        individualPrice = 16.99;
        //cout << total;
    }
    else if (numberShirts >= 21 && numberShirts <= 30){
        discount = 0.2 * shirtTotal;
        beforeTax = shirtTotal - discount;
        total = beforeTax + (TAX * beforeTax);
        individualPrice = 15.99;
        //cout << total;
    }
    else if (numberShirts >= 31){
        discount = 0.25 * shirtTotal;
        beforeTax = shirtTotal - discount;
        total = beforeTax + (TAX * beforeTax);
        individualPrice = 14.99;
        //cout << total;

    }
    else{
        beforeTax = shirtTotal;
        total = beforeTax + (TAX * beforeTax);
        individualPrice = 19.99;
        //cout << total;

    }

    //displaying bill
    cout << endl << endl << endl;
    cout << "-------------------------------------------" << endl;
    cout << "BILL FOR:" << setw(27) << name << endl << "DISCOUNTED COST:" << setw(9) << "$" << individualPrice << " per shirt" << endl << "Total cost: " << setw(13) << fixed << setprecision(2) << "$" << total << " (with tax)";

    return 0;
}