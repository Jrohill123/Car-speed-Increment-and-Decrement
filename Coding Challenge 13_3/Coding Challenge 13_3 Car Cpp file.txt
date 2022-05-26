#include "Car.h"
// constructor defintion
Car::Car(string s, int j)
{
	make = s;
	yearmodel = j;
	speed = 0;
}

// Mutator Definiton
int Car::setspeed()
{
		speed += 5;
	return speed;
}
int Car::setbrakespeed()
{
		speed -= 5;
	return speed;
}

// Accessor Defintion
string Car::getmake()
{
	return make;
}
int Car::getyearmodel()
{
	return yearmodel;
}
int Car::getspeed()
{
	return speed;
}
