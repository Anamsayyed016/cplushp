#include<iostream>
using namespace std;
int main()
{
    int principle, intrest, time,rate;
    cout<<"enter the principle :";
    cin>>principle;

    cout<<"enter the intrest :";
    cin>>intrest;

    cout<<"enter the time :";
    cin>>time;

    cout<<"enter the rate :";
    cin>>rate;

    intrest= (principle*rate*time)/100;

    cout<<"simple intrest :"<<intrest;
}