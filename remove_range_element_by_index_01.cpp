#include <iostream>
using namespace std;

// Function to remove elements from a range in an array
int* remove_range(int arr[], int& size, int start_index, int end_index) {
    // Calculate the number of elements to remove
    int num_to_remove = end_index - start_index + 1;

    // Shift the remaining elements left to fill the removed range
    for (int i = start_index; i <= size - num_to_remove; i++) {
        arr[i] = arr[i + num_to_remove];
    }

    // Update the size of the array
    size -= num_to_remove;

    // Return a pointer to the modified array
    return arr;
}

int main() {
    // Example usage
    int arr[] = {1, 4, 6, 2, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Remove the elements from index 1 to index 3 (inclusive)
    remove_range(arr, size, 1, 3);

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
