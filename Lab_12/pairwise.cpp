#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise( vector<int> &v1, vector<int> &v2)
{
	vector<int> v3;

	int num = 0;	
	int j = 0;
	
	if(v1.size() > v2.size())
		num = v2.size();
	else
		num = v1.size();
	
	//Creates a num vector with the addition of the other vectors
	for(int i = 0 ; i < num ; i++)	
	{	
		j = v1[i] + v2[i];
		
		v3.push_back(j);
	}
	//add the ending of the vectors
	if(v1.size() < v2.size())
	{	
		for(int i = num ; i < v2.size() ; i++)	
			v3.push_back(v2[i]);
	}
	else
	{
		for(int i = num ; i < v1.size() ; i++)	
			v3.push_back(v1[i]);
	}	
		

	return v3;
}

int main()
{
	vector<int> v1{1 , 2 , 3};
	vector<int> v2{4 , 5};
	vector<int> v3;

	v3 = sumPairWise(v1 , v2);

	return 0;	
}