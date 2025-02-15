#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)

        if(arr[j] < arr[i])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0)
}