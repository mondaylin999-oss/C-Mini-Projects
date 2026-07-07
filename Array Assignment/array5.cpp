//5. Student Grade Calculation
#include <iostream>
using namespace std;

int main() {
    double marks;
    cout << "Enter student marks: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 40) {
        cout << "Grade: C" << endl;
    } else if (marks >= 39) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}