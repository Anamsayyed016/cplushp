#include <iostream>
using namespace std;
int main()
{
    int  arr[]={1,2,0,5,0,4,0,7,9,0};
    int count=0;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] == 0) {
            count++;
        }
    }

    cout << "Number of zeros in the array: " << count << endl;
    return 0;
}
