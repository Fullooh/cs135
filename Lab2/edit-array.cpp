//
//
//
//
//
//
//
//
//
//
//
//


#include <iostream>

using namespace std;

int main()
{
    int myData[10]; //making our array by 10

    for (int i = 0; i <10; i++) myData[i] = 1;

    int index, value;
    do{
    
    for (int i = 0; i < 10; i++) cout << myData[i] << " ";
    cout << endl;

    cout << "Please enter index: ";
    cin >> index;
    
    cout << "Please enter value: ";
    cin >> value;

    if (index >= 0 && index < 10) myData[index] = value;

    } while (index >= 0 && index < 10);
    cout << "Index out of range: ";
   
}