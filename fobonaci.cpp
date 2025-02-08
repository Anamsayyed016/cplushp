#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a num :";
    cin>>num;

    int first=0;
    int second=1;

    int nxt;
    cout<<first<<second;

    for(int i=3; i<=num;i++)
    {
        nxt=first+second;
    }
}