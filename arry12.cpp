#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,8,10};

    for(int i=0; i<2; i++) {  // Fix: change loop condition
        if(arr[i+1] - arr[i] > 1) {
            cout << arr[i] + 1 << "\t";
        }
    }
}
