
#include <iostream>
using namespace std;
int main (){
    int year;
    int x;

    cout << "Enter year: ";
    cin>> year;

    cout<<"Enter month: ";
    cin>>x;


      if(x==2){
        if(year%4 !=0){
            cout << "28 days"<<endl;
    }
        else if(year%100 !=0){
            cout << "29 days"<<endl;
    }
        else if(year%400 !=0){
            cout << "28 days"<<endl;
    }
        else{
            cout<< "29 days"<<endl;
    }
    }
    else if(x==8){
        cout<<"31 days"<<endl;
        }
    else if(x>8){
        if(x%2==0){
            cout<<"31 days"<<endl;
        }
        else{
            cout<<"30 days"<<endl;
        }
    }
    else{
        if(x%2==0){
            cout<<"30 days"<<endl;
        }
        else{
            cout<<"31 days"<<endl;
        
    }
}
}