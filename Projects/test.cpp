#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8};
    vector<int> arr2;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i]%2 == 1)
            arr2.push_back(arr[i]);
    }

    for(int i = 0; i < arr2.size(); i++){
        cout << arr2[i] << endl;
    }
     

    return 0;
}