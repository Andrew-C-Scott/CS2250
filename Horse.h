#pragma once
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Horse
{
private:
	string name; //horse name
	string rider; // rider name
	int maxRunningDistPerSecond; //max distance horse can run in one second
	int distanceTraveled; // how far horse has gone already
	int racesWon; //number of races won by horse and rider
public:
	Horse(string horseName, string riderName) //constructor accepts horse/rider name as argument. Initialize each horse to a random maxRunDistperSecond
	{
		name = horseName;
		rider = riderName;
		srand(time(NULL));
		maxRunningDistPerSecond = rand() % 100 + 1;
	}
	string getHorseName() //returns horse name
	{
		return name;
	}
	string getRiderName() //returns rider name
	{
		return rider;
	}
};



