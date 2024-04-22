#include<bits/stdc++.h>

using namespace std;

int first_occur(vector<int>& arr, int k);
int second_occur(vector<int>& arr, int k);

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    int occur1 = first_occur(arr, k);
    int occur2 = second_occur(arr, k);

    if (occur1 == occur2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}

int first_occur(vector<int>& arr, int k)
{
    int n = arr.size();
    int low = 0, high = n-1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int second_occur(vector<int>& arr, int k)
{
    int n = arr.size();
    int low = 0, high = n-1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}
