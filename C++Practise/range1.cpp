#include<iostream>
using namespace std;
int main()
{
    int start=1; int end=15;

    for(int i=start ; i<=end;i++){

        if(i%3==0 && i%5==0)
        {
            cout<<i<<endl;
        }
    }
}