//7. Find Duplicate Elements in an Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << (n-i)<< " Elements : ";
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";
    bool foundDuplicate = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break; // Break loop to avoid printing the same duplicate pair multiple times
            }
        }
    }

    if (!foundDuplicate) {
        cout << "None";
    }
    cout << endl;

    return 0;
}