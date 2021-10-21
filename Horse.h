#pragma once
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//**********************************************************
//Class imlementation file, contains class members/functions
//**********************************************************

class Horse
{ 
private:
	string name; //horse name
	string rider; // rider name
	int maxRunningDistPerSecond; //max distance horse can run in one second
	int distanceTraveled; // how far horse has gone already
	int racesWon; //number of races won by horse and rider
public:
	Horse() //default constructor
	{}
	Horse(string horseName, string riderName) //constructor accepts horse/rider name as argument. Initialize each horse to a random maxRunDistperSecond
	{
		name = horseName;
		rider = riderName;
		srand(time(NULL));
		maxRunningDistPerSecond = rand() % 100 + 1;
	}
	string getHorseName() //returns horse name
	{
		cout << "Enter Horse name: " << endl;
		cin >> name;
		
		return name;
	}
	string getRiderName() //returns rider name
	{
		cout << "Enter rider name: " << endl;
		cin >> rider;

		return rider;
	}
	
	
	
	int runASecond(int distTravel); // method that adds to distance traveled an amount from 0 - maxRunDistPerSecond (this moves horse along track)


	int sendToGate();// sends horse to the start of a race by setting distance traveled to 0
	int displayHorse(int goalLength);
};


