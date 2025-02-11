#include <iostream>
using namespace std;
int main()
{
    int num1=12;
    int num2=18;

    int mx=(num1>num2)?num1:num2;
    int i=mx;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            break;
        }
        i=i+mx;
    }
    cout<<i;
}