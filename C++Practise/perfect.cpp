#include<iostream>
using namespace std;
int main()
{
    int num=7,sum=0;

    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+1;
        }
    }

    if(sum=num){
        cout<<"perfect";
    }

    else{
        "not perfect";
    }
}