// meals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;


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

    int leave, arrival;
    double breakfast=0, lunch=0, dinner=0;
    cin >> leave;
    cin >> arrival;

    if (leave < 700)
    {
        cout << "Enter Cost of breakfast: ";
        cin >> breakfast;
    }
    if (leave < 1200)
    {
        cout << "Enter Cost of lunch: ";
        cin >> lunch;
    }
    if (arrival >700)
    {
        cout << "Enter Cost of dinner: ";
        cin >> dinner;
    }







}

int main()
{
    cout << hotel();
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
