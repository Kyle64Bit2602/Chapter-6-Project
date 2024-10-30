#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int totalDays();
void departTime();
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
	int leave, arrival;
	//departTime(leave, arrival)

	cout << "Welcome to the Travel Expenses Calculator.\n";
	cout << "Please fill out every necessary field.\n";


	int days = totalDays();
	int leave, arrival = departTime(leave, arrival);
	double airCost = airfareCost();
	double conference = conferenceFees();
	double rentals = carRentals();
	double hotel = hotelExpenses();
	double meal = meals();

	totalCosts = airCost + rentals
		+ rentals + hotel + meal;


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
	return days;
}

int departTime(int& leave, int& arrival)
{
	/*
	Accepts 2 arguments
	The time of departure on the first day of the trip,
	and the time of arrival back home on the last day of the trip.
	*/

	cout << "What time did you depart for the trip (ex: 705 is 7:05):  ";
	cin >> leave;

	cout << "What time did you return from the trip (ex: 724 is 7:24): ";
	cin >> arrival;
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

}

double conferenceFees()
{

}

double hotelExpenses();
{

}

double meals();
{

}