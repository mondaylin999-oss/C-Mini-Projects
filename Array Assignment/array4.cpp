//Count frequency of each element in an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    bool visited[n] = {false}; // tracking array to avoid duplicate counting

    for (int i = 0; i < n; i++) {
        cout << "Enter " << (n-i) << " elements: ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        // If element is already processed, skip it
        if (visited[i] == true) continue;              //look soon
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}


// line11 => Imagine grading a stack of papers. The arr is the stack of essays, and visited is you putting a red checkmark on any paper you've already graded so you don't accidentally grade it twice.