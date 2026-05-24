#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, 4);

    if (index != -1) {
        cout << "Element found at index: " << index;
    } else {
        cout << "Element not found";
    }
    return 0;
}
