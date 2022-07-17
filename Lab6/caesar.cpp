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

char shiftChar(char c, int rshift)
{


if ((int) c >= 65 && (int) c <= 90)
{
    toupper(c);
    return c;
}
if ((int) c >= 97 && (int) c <= 122)
{
    return c;
}
else
{
    return c;
}

}