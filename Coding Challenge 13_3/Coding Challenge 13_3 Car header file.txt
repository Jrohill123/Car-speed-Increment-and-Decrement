#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int yearmodel;
	int speed;
	string make;



public:
	// Constructor function.
	Car(string, int);

	// Mutator functions
	int setspeed();
	int setbrakespeed();

	// Acessor Functions;
	int getyearmodel();
	string getmake();
	int getspeed();
};

