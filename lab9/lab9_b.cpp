#include <iostream> 
using namespace std;
//Logan Bolton

int main(){
    int length;
    int width;
    int area;
    int *lengthPtr;
    int *widthPtr;

    lengthPtr = &length;
    widthPtr = &width;
    cout << "Length of rectangle: ";
    cin >> *lengthPtr;
    cout << endl << "Width of rectangle: ";
    cin >> *widthPtr;
    area = *lengthPtr * *widthPtr;
    cout << endl << "The area is: " << area << endl;
    
    if (*lengthPtr > *widthPtr){
        cout << "The length is greater than the width.";
    }
    if (*lengthPtr < *widthPtr){
        cout << "The width is greater than the length.";
    }
    if (*lengthPtr == *widthPtr){
        cout << "The length and width are the same.";
    }

}
