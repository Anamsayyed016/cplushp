#include<iostream>
using namespace std;
int main()
{
    int five;
    cout<<"Enter the value:";
    cin>>five;

    if(five%3==0 && five%5==0){
        cout<<"its divideed";
    }

    else{
        cout<<"not";
    }
}
