#include<iostream>
using namespace std;
int main()
// less than
{
    int num, ans=9;
    cout<<"Enter a number : ";
    cin>>num;

        while (num>0){
            int digit=num%10;
            if(digit<ans){
                ans=digit;
            }
            num=num/10;
        }
            cout<<ans;
}