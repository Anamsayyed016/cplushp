#include<iostream>
using namespace std;
int main()
{
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int mx=arr[0];

    for(int j=1;j<10;j++){

        if(arr[j]>mx){
            mx=arr[j];
        }
    }

    cout<<"largest element:"<<mx;
}