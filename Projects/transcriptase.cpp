// Angst Gregory
//
//
//
//
//
//
//
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


int main(){

    ifstream fin("dna.txt");
    if(fin.fail()){
        cerr << "File cannot open!";
        exit(1);
    }

    string strand;
    string mra = "";
    while(getline(fin, strand)){
        for( int i = 0; i < strand.length(); i++){
            if(toupper(strand[i]) == 'A')
                mra += 'U';
            else if(toupper(strand[i]) == 'T')
                mra += 'A';
            else if(toupper(strand[i]) == 'C')
                mra += 'G';
            else if(toupper(strand[i]) == 'G')
                mra += 'C';
            else
                mra += strand[i];
        }
        
    }

    fin.close();

    cout << mra;

    return 0;
}