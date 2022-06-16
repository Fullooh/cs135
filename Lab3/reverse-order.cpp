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

cout << "Enter earlier date: ";
cin >> starting;

cout << "Enter later date: ";
cin >> end;

string date_arr[400]; // Year is 365 days 
double westEl_arr[400];

int index = 0;
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
 
    // OUR CODE GOES HERE
    if (starting <= date && date <= end){
        date_arr[index] = date;
        westEl_arr[index] = westEl;
        index++;
    }

    if (date > end){
        break;
    }

    for (int i = index-1; i >= 0; i--){
        cout << date_arr[i] << " " << westEl_arr[i] << endl;
    }
}

fin.close();

}