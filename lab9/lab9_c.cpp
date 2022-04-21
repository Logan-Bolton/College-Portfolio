#include <iostream>
#include <vector>
using namespace std;
//Logan Bolton


vector<int> sorter(vector<int>); //function prototype for sorting algorithm


int main(){

    vector <int> vect{7, 4, 36, 1, 3, 6, 2, 99, 77, 10};
    int total;
    vector<int> sorted(10, 0);


    //multiplies the elements by 2
    cout << "The vector elements, multiplied by 2, are: ";
    for (int i = 0; i < 10; i++){
        vect[i] = vect[i] * 2;
        cout << vect[i] << " ";
    }

    //get total

    for (int i = 0; i < 10; i++){
        total += vect[i];
    }
    cout << endl << "The total of all vector elements is: " << total << endl;

    //get sorted and print it out
    sorted = sorter(vect);

    cout << "The sorted vector elements are: ";
    for (int i = 0; i < 10; i++){
        cout << sorted[i] << " ";
    }
    return 0;
}



vector<int> sorter(vector<int> vect){   //sorting algorithm
    int min;
    vect.at(min) = 0;
    int temp;
    for (int i = 0; i < 10; i++){
        min = i;

        for (int j = i + 1; j< 10; j++){
            if (vect[j] < vect[min]){
                min = j;
            }
        }

        temp = vect[i];
        vect[i] = vect[min];
        vect[min] = temp;

    }

    return vect;
}