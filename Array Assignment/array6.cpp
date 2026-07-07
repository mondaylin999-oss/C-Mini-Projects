//6. Prime Number Checker(can divide by 1 and itself)
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;                                   //4

    if (n <= 1) {
        isPrime = false;
    } else {                                                 // 4 <= 4
        for (int i = 2; i * i <= n; i++) {                  //4%2 == 2 ==>  16<=4
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}