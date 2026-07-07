//10. Armstrong Number (Presentation Assignment 1) (An Armstrong number is a special math number. It equals the sum of its own digits, where each digit is raised to a power equal to the total number of digits. They are also called narcissistic numbers)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, temp, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    temp = num;       //153

    while (temp > 0) {                        //Loop 1: Counting the Digits

        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {                       //Loop 2: Computing the Total Sum of Digits Power
        int d = temp % 10;
        sum += round(pow(d, digits));        // round handles potential precision quirks with pow()
        temp /= 10;
    }

    if (original == sum) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}