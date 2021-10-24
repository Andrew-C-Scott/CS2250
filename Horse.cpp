#include "Horse.h"
#include <string>
#include <iostream>
using namespace std;

//**********************************
// Horse member function definitions
//**********************************


int Horse::runASecond() // method that adds to distance traveled an amount from 0 - maxRunDistPerSecond (this moves horse along track)
{
	int totalDistRan = distanceTraveled = +maxRunningDistPerSecond;
	return totalDistRan;
}

int Horse::sendToGate()//resets horse to dist traveled 0;
{
	cout << "Do you want to play again? ";
	char choice;
	cin >> choice;

	if (tolower(choice) == 'y')
	{
		distanceTraveled = 0;
		return distanceTraveled;
	}
	else if (tolower(choice) == 'n')
	{
		return 0;
	}
	else
	{
		cout << "enter valid input. " << endl;
		cin >> choice;
	}
}

int Horse::displayHorse(int goalLength)
{

}
