
#include <iostream>
using namespace std;

int main()
{

float gallon;
float fuelmile;
float gas;


gallon = 0.0;
fuelmile = 0.0;
gas = 0.0;

cout<<"Enter the number of gallons of gas in car's tank: ";
cin>> gallon;
cout<<endl;

cout<<"Enter the fuel efficiency in miles per gallon: ";
cin>> fuelmile;
cout<<endl;

cout<<"Enter the price of gas per gallon: ";
cin>> gas;



cout << "The cost of per 100 mile: "<<100/fuelmile * gas<<endl;

cout << "The car can go "<< gallon * fuelmile<<" miles with the gas in the tank"<<endl;

}