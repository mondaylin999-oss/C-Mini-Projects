//2. Sum of Digits of a Number
#include <iostream>
#include <cmath> // Needed for abs()
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num; // Keep track of the original number
    
    // Convert to positive if the user enters a negative number
    int positiveNum = abs(num); 

    while (positiveNum > 0) {     //123
        sum += positiveNum % 10;  //123%10 = 3 , ==>  12%10= 2 , ==> 1%10= 1
        positiveNum /= 10;        //123/ 10 =12 ,==> 12/10 =1, ==> 1/10 =0
    }

    cout << "Sum of digits of " << temp << " is: " << sum << endl;
    return 0;
}