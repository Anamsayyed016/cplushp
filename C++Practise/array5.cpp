#include<iostream>
using namespace std;
int main()
{
    // exchmage 7 to 0
    int arr[]={1,5,7,3,9,7,3};

    for(int i=0;i<6;i++){

        if(arr[i]==7){
            arr[i]=0;
        }
        cout<<arr[i]<<"\t";
    }
}