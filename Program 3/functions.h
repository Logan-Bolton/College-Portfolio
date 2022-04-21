#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
using namespace std;

int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivores(string);
void printDino(ofstream&, ifstream&, string, int[]);
bool overTenGrand(string);
void printResults(int[], string[]);

#endif