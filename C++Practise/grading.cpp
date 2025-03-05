#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"enter your number:";
    cin>>grade;

    if(grade>=80 && grade<=90){
        cout<<"You got A";
    }

    else if(grade>=60 && grade<80){
        cout<<"You got B";
    } 

    else if(grade>=40 && grade <60){
        cout<<"You got C";
    }

    else if(grade>=0 && grade<40){
        cout<<"You got D";
    }

    else{
        cout<<"please enter valid grade";
    }
}