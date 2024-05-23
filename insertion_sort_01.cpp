#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n^2)
// Memory Complexity = O(n)

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++)
    {
        int indx = i;
        while(indx >= 1)
        {
            if(arr[indx-1] > arr[indx])
            {
                swap(arr[indx-1],arr[indx]);
                indx--;
            }
            else
                break;
        }
        cout << "Considering index " << i << ": ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    }
    cout << "After sorting: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*
7
3 4 1 2 7 6 1
*/
