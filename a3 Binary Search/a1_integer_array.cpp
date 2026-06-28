#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevents overflow

        if (arr[mid] == target) {
            return mid;   // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 23;

    int index = binarySearch(arr, n, target);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}