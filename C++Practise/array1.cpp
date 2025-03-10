#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,7,3,9,3};

    int s=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}