#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,2,6,12};
    
        for (int i=0;i<2;i++){
            for(int j=i+1;j<6;j++){

                if (arr[j]>arr[i]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<arr[1];
    }
