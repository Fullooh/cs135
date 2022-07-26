
#include<iostream>


using namespace std;

string removeLeadingSpaces(string line){
    string outLine;
    bool printlatch=false;  //latches us into search term
    for (int i=0; i < line.length(); i++){
        if (!isspace(line[i])){
             printlatch = true;
        }
        if (printlatch) outLine += line[i];
    }
    return outLine;
    // line = regex_replace(line, regex("^ +| +$|( ) +"), "$1");  //regex not working on gradescope ::tears::
}


int main(){
    string fileName;
    while(getline(cin, fileName)){
        cout << removeLeadingSpaces(fileName) << endl;
    }
    return 0;
}