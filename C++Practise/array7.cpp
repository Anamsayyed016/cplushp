#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,6,7};

    int a=arr[0]+arr[4];
    arr[2]=a-arr[2];

    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
}