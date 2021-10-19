// ******************************|
// File: CS2250 Project 3.cpp    |
// Student: Andrew Scott         |
// Assignment: Project 3 CS2250  |
// ******************************|

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Horse.h"
using namespace std;

int main()
{
    //get horse name
    string horseName;
    cout << "Enter name of horse: " << endl;
    cin >> horseName;

    //get rider name
    string riderName;
    cout << "Enter name of Rider: " << endl;
    cin >> riderName;
    
    //create object
    Horse object1(horseName, riderName);
    cout << "Horse: " <<
        object1.getHorseName() << endl; 

    cout << "Rider: " << 
        object1.getRiderName() << endl;
}



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
