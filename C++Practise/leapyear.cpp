#include<iostream>
using namespace std;
int main()
{
    int year;
    
    cout<<"Enrer a year:";
    cin>>year;

    if((year%4==0 && year%100!=0  || year%400==0)){

        cout<<"This is a leap year";
    }

    else{
        cout<<"This is not a leap year";
    }
}