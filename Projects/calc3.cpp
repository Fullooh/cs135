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
    char prev_s;
    
    while (cin >> a){
        

        if(symbol == '+')
        {
            sum = sum + a;
        }
        if(symbol == '-')
        {
            sum = sum - a;
        }
        
        
        prev_s = symbol;
        cin >> symbol;

        if(symbol == '^')
        {
             if(prev_s == '+')
                sum = sum + (a * a) - a;
            else
                sum = sum - ((a * a) - a);

            cin >> symbol;

        }
        if (symbol == ';')
        {
            cout << sum << endl;
            sum = 0;
            symbol = '+';
        }
        
    }
}