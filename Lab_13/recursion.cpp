#include <iostream>
#include <string>
using namespace std;



int sumRange(int left, int right)
{
	if(left > right)
	{
		return 0;
	}


	if(left == right)
	{	
		return left;
	}
	else
	{
		return sumRange(left + 1, right) + left;
	}
}

//Recurision
void printRange(int left, int right)
{
	if(left <= right)
	{
		cout << left <<" ";
		
		printRange(left+1, right);
	}
}

int sumArrayInRange(int *arr, int left, int right)
{

	if(left == right)
	{	
		return arr[left];
	}
	else
	{
		return sumArrayInRange(arr ,left + 1, right) + arr[left];
	}
}

int sumArray(int *arr, int size)
{
	int x = sumArrayInRange(arr , 0 ,size - 1);
	return x;
}

bool isAlphanumeric(string s)
{
	//if string is empty return true
	if(s == "")
		return true;
	//else 
	else
	{
		//if it is a space return false
		if(!isalpha(s[0]) and !isdigit(s[0]))
			return false;
		//if not send back thought recursion 
		else
			return isAlphanumeric(s.substr(1,s.length()-1));
	}
}

bool nestedParens(string s)
{
	if(s == "")
		return true;
	else if(s[0] == ')' or s[s.length()-1] == '(')
		return false;
	else if(s.length()%2 == 1)
		return false;
	else if(s[0] != '(' and s[0] != ')')
		return false;
	else
		return nestedParens(s.substr(1,s.length()-2));	
}

int main() {

     string s = "ABCCCDD";
     string a = "KLMN 8-7-6";
     string b = "";
     string c = "1 ";
     
	cout << nestedParens("((()))") << endl;      // true (1)
  	cout << nestedParens("()") << endl;          // true (1)
  	cout << nestedParens("") << endl;            // true (1)

  	cout << nestedParens("(((") << endl;         // false (0)
  	cout << nestedParens("(()") << endl;         // false (0)
  	cout << nestedParens(")(") << endl;          // false (0)
  	cout << nestedParens("a(b)c") << endl;       // false (0)
    
    return 0;
}
