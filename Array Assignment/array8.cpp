//8. Palindrome Number(any integer that reads the same both forward and backward)
#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cout << "Enter an integer: ";
    cin >> num;

    original = num;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }

    return 0;
}