#include<iostream>
using namespace std;
int main()
{
        int arr[]={1,5,8,4};

        int s=sizeof (arr)/sizeof (arr[4]);

        for(int i=0;i<s;i++){
            cout<<arr[i]<<"\t";
            
        }

}
