#include<iostream>
using namespace std;
int main()
{
    // febo
    int num;
    cout<<"Enter Your Name:";
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