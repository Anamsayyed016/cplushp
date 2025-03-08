#include<iostream>
using namespace std;
int main()
{
    int n , sum=1;

    cout<< "Enter the number :";
    cin>>n;

    for(int i; i<=n;i++)
    {
        n=i*i;
    }
    cout<<n<<endl;

}