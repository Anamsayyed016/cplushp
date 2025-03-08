#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"enter the number:";
    cin>>num;

    int arr[num];

    for(int i=0;i<=num;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=num;i++){
        cout<<arr[i];
    }
        
}