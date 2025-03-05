#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    int arr[num];
    cout<<"enter the"<<num<< "of numbers :";
    for(int i=0;i< num;i++){
        cin>>arr[i];
    }

    cout<<"Array of elements";
    for(int i=0;i< num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}