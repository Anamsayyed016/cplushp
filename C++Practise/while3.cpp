#include<iostream>
using namespace std;
int main()
{
        int num,sum=0,c=0;
        cout<<"enter the number :";
        cin>>num;

        int originalNum = num;

        while(num>0){
            int digit = num%10;
            sum=sum+digit;
            num=num/10;
            c++;
        }
        // cout<<sum<<endl;
        cout << "Sum of digits of " << originalNum << " is: " << sum << endl;

        // cout<<c;
        cout << "Total number of digits: " << c << endl;

}