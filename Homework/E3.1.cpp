#include <iostream>

using namespace std;

int main()
{
    int i;
    
    cout << "Enter number: ";
    cin >> i;

    if(i == 0){
        cout << "Zero" << endl;
    } 
    else if(i > 0){
        cout << "Positive Number" << endl;
    }
    else{
        cout << "Negative Number" << endl;
    }


}