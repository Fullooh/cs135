// Write a program that asks the user to input
// The number of gallons of gas in tank
// The fuel efficiency in miles per gallon
// The price of gas per gallon
// Then print the cost per 100 miles
// and how far the car can go with gas in the tank

#include <iostream>
using namespace std;

int main()
{

    int gallons = 0;
    int fuel = 0;
    int price = 0;

    cout << "Enter number of gallons in tank: ";
    cin >> gallons;
    cout << endl;

    cout << "Enter the Fuel effeciency in miles per gallon: ";
    cin >> fuel;
    cout << endl;

    cout << "Enter the price per gallon: ";
    cin >> price;
    cout << endl;
   
    cout << "The cost of per 100 mile: " << 100/fuel * price << endl;
    
    cout << "The car can go " << gallons * fuel << " miles in the tank " << endl;
    

}