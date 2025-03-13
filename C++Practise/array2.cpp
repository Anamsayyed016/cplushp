#include<iostream>
using namespace std;
int main()
{
    int arr[10];

    for(int i=0;i<10;i++){
        cout<<"Enter "<<i<<" Number: ";
        cin>>arr[i];
    }

    for (int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
        
    }
}