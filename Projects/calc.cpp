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
//
//

#include <iostream>

using namespace std;

int main (){
    int sum = 0, a;
    char symbol = '+';

    while (cin >> a){
        

        if(symbol == '+')
            sum = sum + a;
        if(symbol == '-')
            sum = sum - a;

        cin >> symbol;
    }
    cout << sum << endl;
}