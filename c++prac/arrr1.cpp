#include<iostream>
using namespace std;
int main()
{
    int sum=0;

    int arr[]={1,3,3};

    for(int i=0;i<3;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}