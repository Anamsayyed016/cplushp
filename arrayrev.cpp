#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,10,2};
    int max=arr[0];

    for(int i=1; i<5;i++)
    {
        if(arr[i]< max)
        {
            max=arr[i];

        }
        
    }
    cout<<max;

}