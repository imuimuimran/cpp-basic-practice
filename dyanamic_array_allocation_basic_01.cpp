#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* ptr = new int[10]{0,1,2,0,592};
    for(int i=0; i<10; i++)
    {
        cout << ptr[i] << "\n";
    }

    delete ptr;

    return 0;
}