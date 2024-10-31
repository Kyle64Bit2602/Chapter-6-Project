#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int totalDays();
int departTime();
double airfareCost();
double carRentals();
double conferenceFees();
double hotelExpenses();
double meals();

int main()
{
	/*
	---MAIN---
	accepts no arguments
	calculates the total cost of the trip
	using all of the functions
	and outputs them
	returns 0
	*/

	double totalCosts;
	//departTime(leave, arrival)

	cout << "Welcome to the Travel Expenses Calculator.\n";
	cout << "Please fill out every necessary field.\n";

	double airCost = airfareCost();
	double conference = conferenceFees();
	double rentals = carRentals();
	double hotel = hotelExpenses();
	double meal = meals();

	totalCosts = airCost + rentals
		+ rentals + hotel + meal;

	cout << "\n\nYou spent a total of $" << totalCosts << " on the trip.";
}

int totalDays()
{
	/*
	Accepts no arguments
	Calculates nothing
	Returns days
	*/
	int days;

	cout << "How many days did you spend on the trip in total? ";
	cin >> days;

	while (days <= 1)
	{
		cout << endl << "Invalid amount, must be over 1. Try again." << endl;
		cout << "How many days did you spend on the trip in total? ";
		cin >> days;
	}

	return days;
}

int departTime()
{

	int leave, arrival;
	/*
	Accepts 2 arguments
	The time of departure on the first day of the trip,
	and the time of arrival back home on the last day of the trip.
	*/

	cout << "What time did you depart for the trip (ex. enter 7:00 as 700): ";
	cin >> leave;

	cout << "What time did you return from the trip (ex. enter 7:00 as 700): ";
	cin >> arrival;

	return leave, arrival;
}

double airfareCost()
{
	/*
	* Accept 1 arguments
	* The amount of any round-trip airfare
	*/

	double airCost;

	cout << "How much does it cost for a round-trip: $";
	cin >> airCost;

	while (airCost <= 0)
	{
		cout << endl << "Invalid cost, try again." << endl;
		cout << "How much does it cost for a round-trip: $";
		cin >> airCost;
	}

	return airCost;
}

double carRentals()
{
	int days = totalDays();
	double distance, mile, parking, taxi, paral, taxal;
	paral = days * 6, taxal = days * 10;
	do {
		cout << "\nHow far have you driven, in miles : ";
		cin >> distance;

	} while (distance < 0);
	do {
		cout << "\nEnter Parking fees: \n";
		cin >> parking;

	} while (distance < 0);
	do {
		cout << "\nEnter taxi costs: \n";
		cin >> taxi;

	} while (distance < 0);

	if (parking - paral < 0)
	{
		parking = paral;
	}
	parking -= paral;
	if (taxi - taxal < 0)
	{
		taxi = taxal;
	}
	taxi -= taxal;

	mile = distance * 0.27;

	return mile + parking + taxi;
}

double conferenceFees()
{
	/*
	* accepts 1 argument
	* Conference or seminar registration fees
	*/

	double conference;

	cout << "How much does it cost for Conference or seminar registration: $";
	cin >> conference;

	while (conference <= 0)
	{
		cout << endl << "Invalid cost, try again." << endl;
		cout << "How much does it cost for Conference or seminar registration: $";
		cin >> conference;
	}

	return conference;
}

double hotelExpenses()
{
	double expense;
	do
	{

		cout << "Enter hotel expenses here: ";
		cin >> expense;

	} while (expense < 0);

	if (expense - 90 <= 0)
	{

		expense = 90;

	}
	return expense - 90;
}

double meals()
{
	int dep = 0, arrival;
	double breakfast = 0, lunch = 0, dinner = 0;
	arrival = departTime();
	dep = arrival / 10000;
	arrival = (arrival - (dep * 10000));
	cout << arrival << " " << dep;

	do {
		cout << "Enter Cost of breakfast: ";
		cin >> breakfast;

	} while (breakfast < 0);
	do {
		cout << "Enter Cost of lunch: ";
		cin >> lunch;

	} while (lunch < 0);
	do {
		cout << "Enter Cost of dinner: ";
		cin >> dinner;

	} while (dinner < 0);
	if (dep < 700)
	{
		if (breakfast - 9 < 0)
		{
			breakfast = 9;
		}
		breakfast -= 9;
	}
	if (arrival > 100)
	{
		if (lunch - 12 < 0)
		{
			lunch = 12;
		}
		lunch -= 12;
	}
	if (arrival > 700)
	{
		if (dinner - 16 < 0)
		{
			dinner = 16;
		}
		dinner -= 16;
	}

	return breakfast + lunch + dinner;
}
