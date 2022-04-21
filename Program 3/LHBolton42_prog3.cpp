#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <iomanip>
using namespace std;
/*
LHBolton42_prog3.cpp
Logan Bolton
4/6/2022
Purpose: parse a dinosaur file into a readable format
*/



int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivores(string);
void printDino(ofstream&, ifstream&, string, int[]);
bool overTenGrand(string);
void printResults(int[], string[]);

//where the magic happens
int main(){
    string fileName;
    ifstream readFile;
    int totalsArray[6] = {0, 0, 0, 0, 0, 0};
    string labelsArray[6] = {"TOTAL DINOS", "TOTAL CARNIVORE DINOS", "TOTAL HERBIVORE DINOS", "DINOS OVER 10,000 LBS", "DINO NAMES END IN 'SAURUS'", "ANIMALS NOT DINOS"};
    ofstream carnFile;
    ofstream herbFile;
    ofstream otherFile;

    //gets the name of the file then opens it
    cout << "Please enter the name of the file you would like to open: ";
    cin >> fileName;
    readFile.open(fileName);
    
    //file validation
    while (readFile.is_open() == false){
        cout << endl << "No file found. Please enter the name of the file you would like to open: ";
        cin >> fileName;
        readFile.open(fileName);
    }
    if (readFile.is_open() == true){
        cout << endl << "File successfully opened." << endl << endl;
    }



    //SORTING FILE
    string tempString;
    int type;
    while(getline(readFile, tempString, '#')){
        
        //find 'saurus'
        if(tempString.find("saurus") != string::npos){
            totalsArray[4] += 1;
        }


        //finds if its a carnivore or herbivore and appends the appropriate file
        type = carnOrHerb(tempString);
        //cout << endl << "return value: " << type;

        if (type == 1){
            carnFile.open("carnOutFile.txt", ios::app);
            printDino(carnFile, readFile, tempString, totalsArray);
            carnFile.close();
            totalsArray[0] += 1;
            totalsArray[1] += 1;
            cout << tempString << " is being printed to the CARNIVORE file" << endl;
            //cout << endl << "main carn";
        }else if(type == 2){
            herbFile.open("herbOutFile.txt", ios::app);
            printDino(herbFile, readFile, tempString, totalsArray);
            herbFile.close();
            totalsArray[0] += 1;
            totalsArray[2] += 1;
            cout << tempString << " is being printed to the HERBIVORE file" << endl;
            //cout << endl << "main herb";
        }else{
            otherFile.open("otherOutFile.txt", ios::app);
            printDino(otherFile, readFile, tempString, totalsArray);
            otherFile.close();
            totalsArray[5] += 1;
            cout << tempString << " is being printed to the OTHER file" << endl;
            //cout << endl << "main other";
        }
        
        
        
        
    }

    //cout << endl << "it made it to the return" << endl;
    readFile.close();
    printResults(totalsArray, labelsArray);
    return 0;
}

//calls the search functions to see if a dinosaur is carnivore/herbivore
int carnOrHerb(string name){
    if(searchCarnivore(name) == true){
        //cout << endl << "finds carn";
        return 1;
    }
    else if(searchHerbivores(name) == true){
        //cout << endl << "finds herb";
        return 2;
    }
    else{
        //cout << endl << "other";
        return -1;
    }
}

//sees if a dinosaur is a carnivore
bool searchCarnivore(string name){
    ifstream carnivoreFile;
    string tempString;
    bool isCarnivore = false;
    carnivoreFile.open("carnivores.txt");
    while(getline(carnivoreFile, tempString, '#')){
        if (tempString == name){
            carnivoreFile.close();
            isCarnivore = true;
            return isCarnivore;
        }
        
    }

   
    carnivoreFile.close();
    return isCarnivore;
}

//sees if a dinosaur is an herbivore
bool searchHerbivores(string name){

    ifstream herbivoreFile;
    string tempString;
    bool isHerbivore;
    herbivoreFile.open("herbivores.txt");
    while(getline(herbivoreFile, tempString, '#')){
        if (tempString == name){
            herbivoreFile.close();
            isHerbivore = true;
            return isHerbivore;
        }
        
    }
    
   herbivoreFile.close();
   return isHerbivore;
}


//prints the information from the directory to the appropriate file
void printDino(ofstream& outputFile, ifstream& inputFile, string tempString, int totalsArray[]){
    

    //goes through each hash mark and makes it readable
    outputFile << "DINOSAUR NAME: " << tempString << endl;
    getline(inputFile, tempString, '#');
    outputFile << "HEIGHT/LENGTH: " << tempString << endl;
    getline(inputFile, tempString, '#');
    outputFile << "MASS: " << tempString << endl;
    if (overTenGrand(tempString) == true){
        totalsArray[3] += 1;
    }
    getline(inputFile, tempString, '#');
    outputFile << "EATS: " << tempString << endl;
    getline(inputFile, tempString, '#');
    outputFile << "DESCRIPTION: " << tempString << endl;
    outputFile << endl << endl;
    




}

//finds out if a dinosaurs weight is over 10 grand
bool overTenGrand(string mass){
    int length;
    length = mass.length();
    mass.erase(length - 3, 3); //knock off lbs
    if (mass.length() >= 16){
        return true;
    }else{ 
        return false;
    }
    
}

//prints results to the console
void printResults(int totalsArray[], string labelsArray[]){
    string line(50, '-');
    int size = 6;
    cout << endl << endl;
    cout << line << endl;
    for(int i = 0; i < size; i++){
        cout << setw(30) << right << labelsArray[i] << ":   " << totalsArray[i] << endl;
    }
    cout << line;
}

