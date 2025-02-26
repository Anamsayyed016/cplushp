#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,8,10,45,63,52};

    int k;
    cout<<"Enter A kth : ";
    cin>>k;

        for (int i=0;i<k;i++){
             for(int j=i+1;j<6;j++){

                if(arr[j]>arr[i]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
             }
        }
        cout<<arr[k-1];
}