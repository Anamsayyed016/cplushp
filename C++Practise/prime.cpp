#include <iostream>
using namespace std;

int main() {
    int num, count = 0;  // 'count' to track number of divisors

    cout << "Enter your number: ";
    cin >> num;

    // Loop to count how many numbers divide 'num'
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++; // Increase count when 'num' is divisible
        }
    }

    // A prime number has exactly 2 divisors (1 and itself)
    if (count == 2) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }

    return 0;
}
