#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(n log n);
bool binary_search(int arr[], int size, int index_arr)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == index_arr)
        {
            return true;
        }
        else if (arr[mid] < index_arr)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

int main()
{
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (int i=0; i<m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    bool is_subset = true;
    for (int i=0; i<n; i++)
    {
        if (!binary_search(arr2, m, arr1[i]))
        {
            is_subset = false;
            break;
        }
    }

    if (is_subset)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
