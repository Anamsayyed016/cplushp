#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,5,3,9,3};
     
    int a=10;

        int s=sizeof(arr)/sizeof (arr[5]);
        
        for(int i=0;i<s;i++){
            arr[i]=arr[i]+5;
        }

        for(int i=0;i<s;i++){
            cout<<arr[i]<<"\t";
        }
}