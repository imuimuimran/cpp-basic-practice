#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O((n-1)*2)/2 = O(n^2) --> This Time Complexity is more efficient than O(n^2)
// Memory Complexity = O(N)
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int pass=0; pass<n; pass++)
    {
        int last = n-1-pass;
        for(int j=0; j<=last-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
        cout << "After pass: " << pass << ": ";
        for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    }
    cout << "After sort: " << "\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*
7
3 5 1 4 2 6 1
*/
