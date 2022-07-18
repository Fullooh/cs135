#include <iostream>
#include <vector>

using namespace std;

vector<int> oddFilter(vector<int> arr)
{
vector<int> arr2;

for(int i = 0; i < arr.size(); i++)
{
     if(arr[i] % 2 == 1)
             arr2.push_back(arr[i]);
}
return arr2;
}