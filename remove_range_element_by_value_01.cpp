#include<bits/stdc++.h>
using namespace std;

int* remove_element(int arr[], int& n, int position_a, int position_b);

int main()
{
    int n;
    cin >> n;
    int arr [n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int position_a, position_b;
    cin >> position_a >> position_b;

    n = sizeof(arr) / sizeof(arr[0]);

    remove_element(arr, n, position_a, position_b);

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int* remove_element(int arr[], int& n, int position_a, int position_b)
{
    int range_a = -1;
    int range_b = -1;
    for (int i=0; i<n; i++)
    {
        if (arr[i] == position_a)
        {
            range_a = i;
        }
        if (arr[i] == position_b)
        {
            range_b = i;
        }
    }

    if (range_a > range_b)
    {
        int temp = range_a;
        range_a = range_b;
        range_b = temp;
    }

    int num_remove = range_b - range_a + 1;

    for (int i = range_a; i <= n - num_remove; i++)
    {
        arr[i] = arr[i + num_remove];
    }

    n = n - num_remove;

    return arr;
}
