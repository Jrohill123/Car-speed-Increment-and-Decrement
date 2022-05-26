#include <iostream>
#include <string>
#include "Car.h";
using namespace std;

//void carspeed(Car);
//void brakespeed(Car);

int main() {
	// Going to ask for cars year and make.
	string carmodel;
	cout << "What kind of car do you drive? ";
	getline(cin, carmodel);
	cout << endl;
	int yearmodel;
	cout << "Thats Awesome, What year is it? ";
	cin >> yearmodel;

	Car car(carmodel, yearmodel);

	// Were going to test if our car model and year model shows.

	cout << "Your car which is a " << car.getmake() << " " << "made in year " << car.getyearmodel();
	cout << endl;

	// Now were going to get the speed for the car. say the maximum, then get the brake same process.
	//carspeed(car)
	for (int i = 0; i < 5; i++)
	{
		cout << "Your car is going this fast in " << i + 1 << " second:";
		for (int j = 0; j < 1; j++)
		{
			car.setspeed();
			cout << car.getspeed();
		}
		cout << endl;
	}
	cout << "Your car went this fast in 5 seconds " << car.getspeed() << endl;
	cout << "You went to a full stop and now you want to decrease." << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Your car is decersing this fast in " << i + 1 << " second:";
		for (int j = 0; j < 1; j++)
		{
			car.setbrakespeed();
			cout << car.getspeed();
		}
		cout << endl;
	}
	cout << "Your car came to a full stop in 5 seconds at: " << car.getspeed() << " MPH.";


	return 0;
}

/* void carspeed(Car e)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Your car is going this fast in " << i + 1 << " second:";
		for (int j = 0; j < 1; j++)
		{
			e.setspeed();
			cout << e.getspeed();
		}
		cout << endl;
	}
}

void brakespeed(Car e)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Your car is decersing this fast in " << i + 1 << " second:";
		for (int j = 0; j < 1; j++)
		{
			e.setbrakespeed();
			cout << e.getspeed();
		}
		cout << endl;
	}

}*/