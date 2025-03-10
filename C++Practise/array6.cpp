#include<iostream>
using namespace std;
int main()
{
    int sum=1;
     
    int arr[]={1,2};
    for(int i=0;i<3;i++){

        sum=sum*arr[i];
    }

    cout<<sum;
}