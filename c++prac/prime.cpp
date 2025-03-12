#include<iostream>
using namespace std;
int main()
{
    int num, c=0;
    cout<<"enter your number";
    cin>>num;

    for(int i=1;i<=num;i++){

       if(num%2==0){
        c++;
       }
    }
    if(c==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}