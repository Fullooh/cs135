//always include the necessary headers
// similar to import in python
#include <iostream> // iostream is the header
                    // input/ouput methods

using namespace std; // using the standard namespace

// main function is the final place to execute everything
// sometimes its called driver function
// its mandatory
int main() 
//this program prints out "hello world" on the screen
{

    cout << "Hello World!" << endl; 
    // the ; is mandatory
    // cout belongs to the iostream header

    return 0; // this is a legacy from C language
              // some programs has this but optional
              // Some old C programmers has old have old habit of
              // returning 0
}

// g++ hello_world.cpp -o hello_world -> complies .cpp file
// to and executable file or extension or .out file
// g++ is the compiler (most popular one)
// hello_world or helloworld.out is not reccommended is the
// name of the output file you can name it whatever you want
// you should name it the same as the cpp file