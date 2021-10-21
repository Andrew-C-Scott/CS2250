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

//*****************************
// Name: Andrew Scott
// Assignment: CS2250 Project 3
//***************************** 


//*****************************
// Driver Code (main cpp file)
//****************************

int main()
{
	Horse *horseObj = nullptr;
	int numObj = 0;

	//validate entry for number of horses/riders must accept numObj > 0
	do{
		cout << "Enter Number of Horses are in the race: " << endl;
		cin >> numObj;
	}while (numObj <= 0);

	horseObj = new Horse[numObj];

	for (int i = 0; i < numObj; i++) // loop through number of objects assign horse/rider name;
	{
		cout << "Horse " << i + 1 << ": " << horseObj[i].getHorseName() << " riden by, " 
		<< horseObj[i].getRiderName() << "." << endl;
		
		cout << "\n";
	}

	//validate entry for race distance must be greater than 100 yards
	int raceDist;
	do {
		cout << "Pick Race distance, must be greater than 100 yards: " << endl;
		cin >> raceDist;
	} while (raceDist <= 100);

}
