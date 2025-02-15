#include <iostream>
using namespace std;
int main()
{
    int sum=0;

    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<7;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}