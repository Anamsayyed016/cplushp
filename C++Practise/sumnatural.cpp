// #include<iostream>
// using namespace std;
// int main()
// {
//     int n , sum=1;

//     cout<< "Enter the number :";
//     cin>>n;

//     for(int i; i<=n;i++)
//     {
//         sum=sum+i*i;
//     }
//     cout<<sum<<endl;

// }

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += i * i; // Accumulate the sum of squares
    }

    cout << "Sum of squares = " << sum << endl;
    return 0;
}
