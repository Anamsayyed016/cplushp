// reuseability of code we use functions
// dry principle use on oops
// for read and ruseability
// types of funtion-1.Return type----with parameter,without parameter--- 2.Non-return type----- with parameter,without parameter.

// syntax:-Datatype funtion_name()
// {
// }
// =====================================================================

// non-retrun type wtihout parameter
// void---empty output-not return
#include <iostream>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;

}

int main(){
cout<<factorial(3);

return 0;
}