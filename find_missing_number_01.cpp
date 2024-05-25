#include <bits/stdc++.h>
using namespace std;

int find_missing_number(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
    }

    n = sizeof(arr) / sizeof(arr[0]);

    int ans;
    ans = find_missing_number(arr, n);

    cout << ans;

    return 0;
}

int find_missing_number(int arr[], int n)
{
    int temp[n + 1];
    for(int i=1; i<n; i++)
    {
        temp[i] = 0;
    }

    for(int i=1; i<n; i++)
    {
        temp[arr[i] - 1] = 1;
    }

    int ans;
    for (int i=1; i<n ; i++)
    {
        if (temp[i] == 0)
            ans = i + 1;
    }
    return ans;
}
