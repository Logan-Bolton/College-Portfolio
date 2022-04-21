// This program calculates the circumference of a circle.
#include <iostream>
using namespace std;

int main(){

	const int PI = 3.14159;
	float diameter;
	float circumference;
	string fullName;
	
	cout << "\n\nWhat is the diameter of the circle?\n";
	cin >> diameter;
	cin.ignore();
	
	cout << "\n\nWhat is your first & last name?\n";
	getline(cin, fullName);

	// Calculate the circumference.
	circumference = PI * diameter;

	double circumference, diameter;
	
	// Display the circumference.
	cout << "\n\nHello, " << fullName;
	cout << "! The circumference of your circle is: " << circumference;
	cout << endl << endl;
	
	return 0;
}