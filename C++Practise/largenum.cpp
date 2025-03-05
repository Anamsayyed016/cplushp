#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your number 1st:";
    cin>>a;
     
    cout<<"Enter your number 2nd:";
    cin>>b;

    cout<<"Enter your number 3rd:";
    cin>>c;

    
    if(a>b && a>c){
        cout<<"A is greater";
    }

    else if(b>a && b>c){
        cout<<"B is greater";
    }

    else if(c>a && c>b){
        cout<<"C is greater";
    }
    
    else{
        cout<<"please enter valid number";
    }
    
 
       
}