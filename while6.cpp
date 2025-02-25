#include<iostream>
using namespace std;
int main()
{
        // greater digit
    int num, ans=0;
    cout<<"Enter a number : ";
    cin>>num;

        while (num>0){
            int digit=num%10;
            if(digit>ans){
                ans=digit;
            }
            num=num/10;
        }
            cout<<ans;
}