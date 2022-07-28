#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
	vector<int> num;

	for(int i = 0; i < n; i++)
		num.push_back(i);
	return num;
}

int main()
{
	vector<int> num;
	int n;

	cin >> n;
	
	num = makeVector(n);


	return 0;	
}
