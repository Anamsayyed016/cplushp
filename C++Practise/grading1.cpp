#include<iostream>
using namespace std;
int main()
{
    int garde;
    cout<<"Enter your grade :";
    cin>>garde;

    if(garde>=80 && garde<=90){
        cout<<"you got A";    
    }

    else if(garde>=60 && garde<80){
        cout<<"You got B";
    }

    else if(garde>=40 && garde>60){
        cout<<"You got C";
    }
    else if(garde>=0 && garde<40){
        cout<<"You got D";
    }
    else{
        cout<<"please enter valid number";
    }
}