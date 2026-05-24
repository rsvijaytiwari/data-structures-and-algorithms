#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    reverseArray(nums, size);

    cout << "The reversed array is: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
