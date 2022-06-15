#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;


int main()
{
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); // read one line from the file

string date, input; // IF WE TAKE AWAY INPUT THEN THE CODE DOESNT SINGLE OUT SPECIFIC DATES.
                    // "date" IS HOLDING ALL THE FILES WHILE INPUT IS SINGLING OUT EACH ONE, going to ask for more clarification.
double eastSt, eastEl, westSt, westEl;

cout << "Enter Date: ";
cin >> input;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
 
    // OUR CODE GOES HERE
    if (input == date){
    cout << "East basin storage: " << eastSt << " billion gallons" << endl;
    }
}

fin.close();

}