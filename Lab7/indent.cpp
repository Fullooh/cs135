#include<iostream>
#include<string>
#include<sstream>



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

int countChar(string line, char c){
    int count;
    for(int i=0;i<line.length();i++){
        if(line[i]==c)
            count++;
    }
    return count;
}

string addLeadingSpaces(string multiLine){
    string result;
    istringstream cleanStream(multiLine);
    int indentDepth = 0;
    string atindent = "";
    for(string line; getline(cleanStream, line); ) {
        if(line[0] == '}'){         // IF first line is a '}' reduce by one for THIS LINE
            atindent = string(indentDepth - 1, '\t');
        }
        else{
            atindent = string(indentDepth, '\t');
        }
        result += atindent + line + "\n";
        indentDepth += countChar(line, '{') - countChar(line, '}');  //track changed to indentation level for NEXT LINE TO PRINT, not THIS LINE
    }
    return result;
}

int main(){
    string fileName;
    string cleanString;
    while(getline(cin, fileName)){
        cleanString += removeLeadingSpaces(fileName) + "\n";
    }
    cout << addLeadingSpaces(cleanString);
    return 0;
}