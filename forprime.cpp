#include<iostream>
using namespace std;
int main()
{
    int num, count=0;
    cout<<"Enter your number:";
    cin>>num;

        for(int i=1; i<=num;i++){

            if(num%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<"Prime Number";
        }
        else
        {
            cout<<"Not Prime Number";
        }
}