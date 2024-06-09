#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* x = new int;
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << x[i] << " ";
    }

    delete [] x;

    return 0;
}
