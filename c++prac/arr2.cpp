#include<iostream>
using namespace std;
int main()
{
    // print array
    int arr[]={1,8,4,5,6,9};

        int s=sizeof(arr)/sizeof(arr[5]);

        for(int i=0; i<s;i++ ){
            cout<<arr[i]<<"\t";
        }
}