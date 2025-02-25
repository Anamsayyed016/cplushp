#include<iostream>
using namespace std;
int main()
{
        // Fibonacci Series Generator
    int num;
    cout<<"Enter your number :";
    cin>>num;

    int first=0;
    int second=1;
    int nxt;
    cout<<first<<second;

        for(int i=3;i<=num;i++){
            nxt=first+second;
            first=second;
            second=nxt;
            cout<<nxt;

        }
}