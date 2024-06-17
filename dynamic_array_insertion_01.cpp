#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int* arr;
    int total_array_size;
    int used_array_size;

    void Increase_size()
    {
        total_array_size = total_array_size * 2;
        int* tmpt = new int[total_array_size];
        for(int i=0; i<used_array_size; i++)
        {
            tmpt[i] = arr[i];
        }
        delete[] arr;
        arr = tmpt;
    }

public:
    Array()
    {
        arr = new int[1];
        // initialize array size
        total_array_size = 1;
        used_array_size = 0;
    }
    // Insertion
    void Push_back(int x)
    {
        if(total_array_size == used_array_size)
        {
            Increase_size();
        }
        // x will be pushed in used_array_size
        // As the used_array_size = index of total_array_size
        arr[used_array_size] = x;
        used_array_size++;
    }
    void Print_array()
    {
        for(int i=0; i<used_array_size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Array arr1;

    arr1.Push_back(10);
    arr1.Push_back(20);
    arr1.Push_back(30);
    arr1.Push_back(40);
    arr1.Push_back(50);

    arr1.Print_array();

    return 0;
}