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
	Horse* horseObj = nullptr;
	int numObj = 0;

	//validate entry for number of horses/riders must accept numObj > 0
	do {
		cout << "Enter Number of Horses are in the race: " << endl;
		cin >> numObj;
	} while (numObj <= 0);

	horseObj = new Horse[numObj]; //dynamic array of size num obj (type horse)

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

	char runASec; // hold Y or N
	cout << "Do you want to begin the race?" << "Enter Y for Yes, N for No. " << endl;
	cin >> runASec;

	if (tolower(runASec) == 'y')
	{
		cout << "Race will begin now" << endl;
	}
	else if (tolower(runASec) == 'n')
	{
		cout << "Please rerun application to begin again : " << endl;
		return 0;
	}
	else
	{
		cout << "Please enter valid choice or press q to quit" << endl;
		cin >> runASec;
		if (runASec == 'q')
		{
			return 0;
		}
	}

	

}
