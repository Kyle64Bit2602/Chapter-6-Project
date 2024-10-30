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
	double leave, arrival;
	departTime(leave, arrival);
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

}