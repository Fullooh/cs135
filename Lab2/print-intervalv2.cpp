#include <iostream>

using namespace std;

int main ()
{
    int L, U;

    cout << "Please enter value for L: " << endl;
    cin >> L;

    cout << "Please enter value for U: " << endl;
    cin >> U;

    int i = L;
    while (i < U){
        cout << i << " " << endl;
        i++;
    }


}