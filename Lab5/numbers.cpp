//Angst S Gregory
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
#include <iomanip>
using namespace std;

bool isDivisibleBy (int n, int d)
{
    if (d == 0)
    {
        return false;
    }
        if (n % d == 0)
    {
        return true;
    }
        else
        {
            return false;
        }
}

bool isPrime (int n)
{
    if (n < 2)
    {
        return false;
    }
        for (int i = 2; i <= n-1; i++)
        {
        if (isDivisibleBy(n,i))
    {
        return false;
    }
        }
            return true;
    }

int nextPrime(int n)
{
    int i = n +1;
    while(!isPrime(i)){
        i++;}
    return i;
    }

int countPrimes( int a, int b)

{

    int count = 0;

    for (int i = a; i <=b; i++)

    {

        if(isPrime(i))

        {

            count++;

        }

    }

        return count;

    

}

bool isTwinPrime(int n)

{

 if (((isPrime(n+2)) && (isPrime(n))) || ((isPrime(n)) && (isPrime(n-2))))

 {

     return true;

 }

    else

    {

        return false;

    }

}

int nextTwinPrime(int n)

{

    int i = n +1;

    while(!isTwinPrime(i)){

        i++;}

    return i;

    }

int largestTwinPrime(int a, int b)

{

    for( int i = b; i >= a; i--)

    {

        if(isTwinPrime(i))

        {

            return i;

        }

    }

    return -1;

}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << isDivisibleBy(num1, num2);
}