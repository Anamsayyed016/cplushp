#include<iostream>
using namespace std;
int main()
{
    
        int num;
        cout<<"enter the num:";
        cin>>num;
    for(int r=1;r<=5;r++){
        for(int c=1;c<=num+num;c++){

         
            if(c>=num+1 && c<=num-1+r){cout<<"*";}
            else{cout<<" ";}
    }
    cout<<endl;
}
}