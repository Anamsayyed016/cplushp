#include<iostream>
using namespace std;
int main(){

    int num , fac=1;
    cout<<"Enter your number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        fac=fac*i;
    }
    cout<<fac<<endl;
}