#include<iostream>
using namespace std;
int main()
{
    int num,ans=1;
    cout<<"enter the number :";
    cin>>num;

    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    cout<<ans<<endl;
}