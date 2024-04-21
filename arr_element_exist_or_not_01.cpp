#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int k, bool searchFirst)
{
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            result = mid;
            if (searchFirst)
                high = mid - 1;
            else
                low = mid + 1;
        } else if (arr[mid] > k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return (result != -1);
}

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    if (binarySearch(arr, n, k, true) && binarySearch(arr, n, k, false)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
