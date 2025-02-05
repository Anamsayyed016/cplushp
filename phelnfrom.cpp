#include <iostream>
using namespace std;
int main()
{
    int num, rev=0 , ans;
    cout<<"Enter a number: ";
    cin>>num;
    ans==rev;
    while (num>0)
    {
        int digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
    if(ans==rev)
    {
        cout<<"The number is a palindrome.";
    }
    else
    {
        cout<<"The number is not a palindrome.";
    }
}
