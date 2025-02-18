#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,7,6,8,3};

     int s=sizeof(arr)/sizeof(arr[0]);

     for(int i=0; i<5;i++)
     {
        cout<<arr[i]<<"\t";
     }
}