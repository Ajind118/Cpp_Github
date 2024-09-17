#include <iostream>
using namespace std;

// Function to merge two unsorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
}

int main() {
    int size1, size2;

    // Input size of the first array
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];

    // Input elements of the first array
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input size of the second array
    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];

    // Input elements of the second array
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Merged array size
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    // Merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    // Output the merged array
    cout << "Merged array:\n";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
