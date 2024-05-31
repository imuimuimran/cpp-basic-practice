#include <iostream>
#include <deque>

using namespace std;

// Time Complexity: O(n)
void sortLadderArray(deque<int>& arr) {
    deque<int> sortedArr;
    while (!arr.empty()) {
        if (arr.front() < arr.back()) {
            sortedArr.push_back(arr.front());
            arr.pop_front();
        } else {
            sortedArr.push_back(arr.back());
            arr.pop_back();
        }
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < sortedArr.size(); i++) {
        arr.push_back(sortedArr[i]);
    }
}

int main() {
    deque<int> arr = {1, 2, 3, 4, 3, 2, 1};

    cout << "Unsorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    sortLadderArray(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}