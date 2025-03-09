#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the 1st value:";
    cin>>x;

    cout<<"Enter the 2nd value:";
    cin>>y;

    cout<<"Enter the 3rd value:";
    cin>>z;

    if(x>y && x>z){
        cout<<"x is greater";
    }
    else if(y>x && y>z){
        cout<<"y is greater";
    }
    else if(z>x && z>y){
        cout<<"z is greater";
    }
    else{
        cout<<"enter valid number";
    }
}