#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

// Time Complexity: O(nlogn)
int main() {
    deque<int> arr;
    int n, x;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
