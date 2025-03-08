#include<iostream>
using namespace std;
int main()
{
    int amt;
    cout<<"Enter the amount:";
    cin>>amt;

    if(amt>=0 && amt<=1000){
        cout<<(1000*5)/100;
    }

    else if(amt>1000 && amt<=5000){
        cout<<(5000*10)/100;
    }

    else if(amt>5000 && amt<=10000){
        cout<<(10000*15)/100;
    }
    else if(amt>10000 && amt<=30000){
        cout<<(30000*20)/100;
    }
    else if(amt<=50000){
        cout<<(50000*30)/100;
    }
    else{
        cout<<"enter valid input";
    }
}
