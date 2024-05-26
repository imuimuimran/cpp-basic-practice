#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Input array size: ";
    cin >> n;
    int arr[n];
    int i,sum = 0;
    cout << "Input array elements: ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }

    cout << "Summation of arr is: " << sum <<"\n";

    sum =1;
    for(i=0; i<n; i++)
    {
        sum *= arr[i];
    }

    cout << "Multiplication of arr is: " << sum;

    return 0;
}
