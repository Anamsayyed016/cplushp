#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;

    int first=0;
    int second=1;
    int nxt;
    
        for(int i=1;i<=num;i++){
             
            if(i==1){
                cout<<first;
                continue;
            }
            if(i==2){
            cout<<second;
            continue;
        }
        nxt=first+second;
        first=second;
        second=nxt;
        cout<<nxt;
        }
}