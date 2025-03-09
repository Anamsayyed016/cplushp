#include<iostream>
using namespace std;
int main()
{
    int base, power, ans=1;

    cout<<"enter your base:";
    cin>>base;

    cout<<"Enter your power:";
    cin>>power;

        for(int i=1;i<=power;i++){
            ans=ans*base;
        }
        cout<<ans;
}