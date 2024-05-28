#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

// Time Complexity: O(n)
int main() {
    deque<int> arr;
    int n, x, maxVal = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
        maxVal = max(maxVal, x);
    }

    // Initialize count array with zeros
    int count[maxVal + 1] = {0};

    // Count the occurrences of each element in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Calculate the cumulative sum of the count array
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    // Copy the elements to the output array in sorted order
    deque<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
