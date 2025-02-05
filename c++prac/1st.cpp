#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter your number  1st and 2nd value :";
    cin>>a>>b;

    char c;
    cout<<"+ - * / ";
    cin>>c;

    switch (c)
    {
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;
         
        case '/':
        cout<<a/b;
        break;
    }
}