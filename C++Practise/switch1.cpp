#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    char opeators;
    cout<<"Enter First Number: ";
    cin>>num1;

    cout<<"Enter Second Number: ";
    cin>>num2;

    cout<<"Enter + - * / % : ";
    cin>>opeators;

    

    switch(opeators){
        case '+':
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;

        case '*':
        cout<<num1*num2;
        break;

        case '/':
        cout<<num1/num2;
        break;

        case '%':
        cout<<num1%num2;
        break;

        default:
        cout<<"ENter valid number";
    }
    

}
