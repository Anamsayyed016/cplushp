#include <iostream>
using namespace std;
int main()
{
    int a=2;
    int r=3;
    int n=5;

    for(int i=1;i<n;i++){
        cout<<a<<" ";
        a*=r;
    }
}