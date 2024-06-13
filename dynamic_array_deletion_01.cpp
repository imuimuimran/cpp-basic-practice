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

    void Insert_index_element(int pos, int x)
    {
        if(total_array_size == used_array_size)
        {
            Increase_size();
        }
        // if we implement below the loop
        // we will lose the elements
        // so we have to implement the loop from the back side
        //for(int i=0; i<used_array_size; i++)
        for(int i=used_array_size-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        used_array_size++;
    }

    int get_Size()
    {
        return used_array_size;
    }
    int get_Element(int idx)
    {
        if(idx > used_array_size)
        {
            cout << "Error " << idx << " is out of bound\n";
            return -1;
        }
        return arr[idx];
    }
    void Pop_back()
    {
        if(used_array_size == 0)
        {
            cout << "Current size is 0\n";
            return;
        }
        used_array_size--;
    }
    void Erase(int pos)
    {
        if(pos>=used_array_size)
        {
            cout << "Position doesn't exist\n";
            return;
        }
        for(int i=pos+1; i<used_array_size; i++)
        {
            arr[i-1] = arr[i];
            //swap(arr[i-1], arr[i]);
        }
        used_array_size--;
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

    arr1.Insert_index_element(1,5);

    arr1.Print_array();

//    cout << arr1.get_Size() << "\n";
//
//    for(int i=0; i<arr1.get_Size(); i++)
//    {
//        cout << arr1.get_Element(i) << "\n";
//    }

    arr1.Pop_back();
    arr1.Print_array();
    arr1.Pop_back();
    arr1.Print_array();

    arr1.Erase(1);
    arr1.Print_array();

    return 0;
}