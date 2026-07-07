//3. Fibonacci Series (First $N$ terms)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";     // 4
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {                  //1 <= 4                   //i=1; i<=n
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 0;
}