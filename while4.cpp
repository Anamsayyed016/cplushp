#include<iostream>
using namespace std;
int main()
{
        // palindrom--------------
    int num,rev=0,ans;
    cout<<"Enter the number: ";
    cin>>num;
    ans=num;

    while (num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

        if (ans==rev){
            cout<<"palindrom";
        }

        else{
            cout<<"Not palindrom";
        }
}