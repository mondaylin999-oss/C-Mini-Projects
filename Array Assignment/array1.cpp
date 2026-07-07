//1. Find the Second Largest Element in an Array
#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << (n-i) << " elements: ";
        cin >> arr[i];                                 //3 ==> [4,5,3,7 ]
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {                         //အဲ့၀◌င်လာတဲ့ကောင်က ပထမ ထက်ကြီးလား? မကြီးရင်အောက်ကကောင်လုပ် ။ အောက်ကကောင်က duplicate အတွက်။
            second = first;
            first = arr[i];  //the size of the first variable stays exactly the same, but the old value (-2,147,483,648) is thrown out and replaced by your array's number (like 10 or 20).
        } else if (arr[i] > second && arr[i] != first) {     // <= this != for dupicaters {5,5,3}
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}