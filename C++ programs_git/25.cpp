#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

// Function to find the second largest element in the array
int findSecondLargest(int arr[], int size) {
    int firstLargest, secondLargest;
    
    // Initialize firstLargest and secondLargest to the smallest possible integer
    firstLargest = secondLargest = INT_MIN;

    // Traverse the array to find the first and second largest numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest; // Update secondLargest before changing firstLargest
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest is still INT_MIN, it means no second largest number exists
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
        return -1;
    }
    
    return secondLargest;
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Ensure the size is valid
    if (size < 2) {
        cout << "Array should have at least two elements to find the second largest number." << endl;
        return 0;
    }

    int arr[size];

    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Find the second largest number
    int secondLargest = findSecondLargest(arr, size);

    // Output the second largest number
    if (secondLargest != -1) {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}
