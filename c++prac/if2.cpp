#include<iostream>
using namespace std;
int main()
{
    int pwd;
    cout<<"enter your password:";
    cin>>pwd;

    if(pwd>=1000 && pwd<=9999)
    cout<<"welcome here";

    else{
        cout<<"you are not welcome";
    }
}