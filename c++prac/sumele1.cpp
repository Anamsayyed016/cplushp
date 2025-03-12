#include<iostream>
using namespace std;
int main()
{
 int num, i=1,sum=0;
 cout<<"Enter your number:";
 cin>>num;
 
 while(i<=num){
    sum=sum+i;
    i++;
 }
 cout<<"sum:"<<sum<<endl;
}