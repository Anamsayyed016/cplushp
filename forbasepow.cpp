#include<iostream>
using namespace std;
int main()
{
    int base, power, ans=1;

        cout<<"Enter Base:";
        cin>>base;

        cout<<"Enter Power:";
        cin>>power;

        for(int i=1;i<=power;i++){
            ans=ans*base;
        }

            cout<<ans;
}