// meals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;




double departTimeM()
{
    double leave, arrival;
    /*
    Accepts 0 arguments
    The time of departure on the first day of the trip,
    and the time of arrival back home on the last day of the trip.
    returns leave and arrival time, with 1 digit seperation on average 
    */

    cout << "What time did you depart for the trip (ex: 705 is 7:05):  ";
    cin >> leave;

    cout << "What time did you return from the trip (ex: 724 is 7:24): ";
    cin >> arrival;

    return leave*10000+ arrival;
}






double hotel()
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

double meal()
{

    int dep=0, arrival;
    double breakfast=0, lunch=0, dinner=0;
    arrival = departTimeM();
    dep = arrival / 10000;
    arrival = (arrival - (dep * 10000));
    cout <<  arrival << " " << dep;

    do {
        cout << "Enter Cost of breakfast: ";
        cin >> breakfast;

    } while (breakfast < 0);
    do{
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
    if (arrival >100)
    {
        if (lunch - 12 < 0)
        {
            lunch = 12;
        }
        lunch -= 12;
    }
    if (arrival >700)
    {
        if (dinner -16 < 0)
        {
            dinner = 16;
        }
        dinner -= 16;
    }


    return breakfast+ lunch+ dinner;




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
    taxi-= taxal;

    mile = distance * 0.27;

    return mile + parking + taxi;











}

int main()
{
    cout << carRentals();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
