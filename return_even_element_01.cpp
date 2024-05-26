#include <iostream>
#include <vector>
using namespace std;

// Function to filter even numbers from a vector
vector<int> filter_even(vector<int> v) {
    vector<int> result;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            result.push_back(v[i]);
        }
    }

    return result;
}

int main() {
    // Example usage
    vector<int> my_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> even_vector = filter_even(my_vector);

    // Print the original vector and the even vector
    cout << "Original vector: ";
    for (int i = 0; i < my_vector.size(); i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;

    cout << "Even vector: ";
    for (int i = 0; i < even_vector.size(); i++) {
        cout << even_vector[i] << " ";
    }
    cout << endl;

    return 0;
}
