#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta)
{
	int j = 0;
	//combine the vector together
	for(int i = 0; i < vegeta.size(); i++)
	{
		j = vegeta[i];
		goku.push_back(j);	
	}
		vegeta.clear();

}

int main()
{
	vector<int> v1{7,8};
	vector<int> v2{9};

	gogeta(v1 , v2);

	return 0;	
}