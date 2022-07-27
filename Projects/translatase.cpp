/*
Author: Afaq Waris
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: Project 2B

Your task is to write a program called translatase.cpp that given strands of DNA 
(taken from dna2b.txt), outputs to the console the corresponding amino-acid chain.

*/

//**translatase.cpp**//

#include <iostream>

#include <string>

#include <fstream>

#include <cstdlib>

using namespace std;

// returns complement of a given nucleobase

char

DNAbase_to_mRNAbase(char dna)

{

if (toupper(dna) == 'A')

return 'U';

else if (toupper(dna) == 'T')

return 'A';

else if (toupper(dna) == 'C')

return 'G';

else if (toupper(dna) == 'G')

return 'C';

else

return ' ';

}

// takes DNA strand as a parameter and

// returns corresponding mRNA

string

DNA_to_mRNA(string input)

{

// initialize the otuput string with empty string

string output = "";

//looping through each letter and convert

for (int i = 0; i < input.size(); ++i)

{

//add converted letter to output string

output = output + DNAbase_to_mRNAbase(input[i]);

}

//returning converted string

return output;

}

// lookups the dictionary for the give codon and returns

// the corresponding amino acid , if codon is found in

// the dictionary. otherwise return an empty string

string dictionary_read(string codon, ifstream & dict)

{

string key, value;

// reset error state

dict.clear();

// set file pointer such that it points the beginning

dict.seekg(0);

while (dict >> key >> value)

{

if (codon == key)

return value;

}

return " ";

}

//main function

int main()

{

//open input files

ifstream dnaFin("dna2b.txt");

ifstream dicFin("codons.tsv");

string strand;

// print error message,if file does not exist or unable to open file

if (dnaFin.fail())

{

cerr << "File cannot be read, opened, or does not exist.\n";

exit(1);

}

//loop for each line untill end of file is reached

while (getline(dnaFin, strand))

{

// decleare two boolean variable to keep track whehter

// the start condon is read or not

bool startOccur = false;

// read three bases at a time from the strand

for (int i = 0; i < strand.size(); i = i + 3)

{

// convert three bases to mRNA

string codon = DNA_to_mRNA(strand.substr(i, 3));

// check whehter it is a start codon or not

// if so , enable the startOccur flag

if (codon == "AUG")

{

startOccur = true;

}

// check whehter it is a end codon or not

// if so , end the translation

if (codon == "UAA" || codon == "UGA" || codon == "UAG")

{

// end the translation

break;

}

// translate the mRNA only if already start codon is read

if (startOccur == true)

{

cout << dictionary_read(codon, dicFin);

}

// only print "-", if start codon is already read and

// next codon is not a stop codon

if (i < i + 3)

{

string nxtCodon = DNA_to_mRNA(strand.substr(i + 3, 3));

if (startOccur != false && nxtCodon != "UAA"

&& nxtCodon != "UGA" && nxtCodon != "UAG")

{

cout << "-";

}

}

}

cout << endl;

}

// close input file

dnaFin.close();

dicFin.close();

return 0;

}