#include <iostream>
using namespace std;

    // Funtion with same name but have diff. arguments
    int sum(){
        return 0;
    }

    int sum(int a){
        return a;
    }

    int sum(int a, int b){
        return a+b;
    }

    int main(){

        cout<<sum(5,6)<<endl;
        cout<<sum()<<endl;
        cout<<sum(7)<<endl;
    }
