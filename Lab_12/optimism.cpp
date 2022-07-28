#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(vector<int> v)
{
	for(int i = 0; i < v.size();i++)
	{
		if(v[i] < 0)
		{
			//Take out one value that is > 0 
			for( int j = i ; j < v.size() ; j++)
				v[j] = v[j + 1];
				
			
			i--;
			v.pop_back();
		}
	}
	return v;
}

int main()
{
	vector<int> num{1,2,-1,-1,3,4,-1,6};
	
	num = goodVibes(num);

	for(int i = 0; i < num.size();i++)
		cout << num[i] << " ";
	return 0;	
}
