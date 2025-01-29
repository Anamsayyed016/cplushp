#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    switch (a)
    {
        case 1:cout<<"one"<<endl;
        break;

        case 2:cout<<"two"<<endl;
        break;

        case 3:cout<<"three"<<endl;
        break;
        
        default:cout<<"no match"<<endl;
    }
}
