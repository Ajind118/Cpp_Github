#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int size, target;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Input the target value to search
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, size, target);

    // Output the result
    if (result == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
