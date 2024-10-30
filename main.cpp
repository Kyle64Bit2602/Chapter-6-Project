#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int totalDays();
void departTime();
double airfaireCost();
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
	double leave, arrival;
	//departTime(leave, arrival)
	
	cout << "Welcome to the Travel Expenses Calculator.\n";
	cout << "Please fill out every necessary field.\n";


	int days = totalDays();
	string leave, arrival = departTime();
	double airCost = airfaireCost();
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
void departTime(double& leave, double& arrival)
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

double airfaireCost()
{

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
