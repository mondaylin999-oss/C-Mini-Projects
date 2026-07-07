//11. Perfect Number(a whole number that equals the exact sum of all of its proper divisors (numbers that divide it evenly), excluding the number itself)
//Another perfect number is \(28\). Its proper divisors are \(1\), \(2\), \(4\), \(7\), and \(14\). If we add them together (\(1 + 2 + 4 + 7 + 14\)), the answer is exactly \(28\).
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Find all proper divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num > 0) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}