#include <iostream>
using namespace std;

int main() {
    // sum of the elements....//
    int num, sum=0, i=1;
    cout<<"Enter the numbers:";
    cin>>num;

    while(i<=num){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
}
