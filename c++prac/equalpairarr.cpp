#include<iostream>
using namespace std;
int main()
{
 int arr[]={1,3,5,2,6};
 int target=6;
 
        for(int i=0;i<6;i++){

            for(int j=i+1;j<6;j++){

                if(arr[i]+arr[j]==target){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
            }
        }
            return 0;
}