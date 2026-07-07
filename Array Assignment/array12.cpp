//12. GCD (Greatest Common Divisor)
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    int a = n1, b = n2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD of " << n1 << " and " << n2 << " is: " << a << endl;
    return 0;
}