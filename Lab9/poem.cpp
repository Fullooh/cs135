
#include <iostream>
using namespace std;


//Creates a pointer and poem 
//Then return pointer 
string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

//delete memory for pointer 
void deletePoem(string* p)
{
	delete p;
	p = nullptr;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
	deletePoem(p);
        // assume that the poem p is not needed at this point

    }
}
