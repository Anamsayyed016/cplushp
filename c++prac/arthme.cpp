#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter any num1 : ";
    cin>>a;
    cout<<"enter any num2 : ";
    cin>>b;

       int add = a + b;
       int sub = a - b;
       int div = a % b;
       int multi = a * b;
       int mode = a / b;
       cout<<"add is : "<<add<<endl;
       cout<<"Sub is : "<<sub<<endl;
       cout<<"div is : "<<div<<endl;
       cout<<"multi is : "<<multi<<endl;
       cout<<"mode is : "<<mode<<endl;
}