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

string date, starting, end;
double eastSt, eastEl, westSt, westEl;


cout << "Enter starting date: ";
cin >> starting;

cout << "Enter ending date: ";
cin >> end;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
 
    // OUR CODE GOES HERE
    if (starting <= date && date <= end){
        if (eastEl > westEl){
            cout << date << " East" << endl;
        }
        else if (eastSt < westEl){
            cout << date << " West" << endl;
        }
        else{
            cout << date << " Equal" << endl;
        }
    }
}

fin.close();

}