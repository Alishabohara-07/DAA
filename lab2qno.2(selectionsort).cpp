#include <iostream>
using namespace std;

// Function to perform selection sort and count steps
void selectionSort(int arr[], int size, int& stepCount) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            stepCount++; // Count each comparison
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap if minIndex has changed
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            stepCount++; // Count each swap
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int stepCount = 0;
    selectionSort(arr, n, stepCount);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Total number of steps: " << stepCount << endl;

    return 0;
}

