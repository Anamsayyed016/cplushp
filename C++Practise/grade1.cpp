#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if(marks>80 && marks<=90){
        cout<<"You got A";
    }
    else if(marks>60 && marks<=80){
        cout<<"You got B";
    }
    else if (marks>40 && marks<=60){
        cout<<"You got C";
    }
    else if(marks>0 && marks<=40){
        cout<<"You got D";
    }

    else{
        cout<<"You got fail";
    }
    
}