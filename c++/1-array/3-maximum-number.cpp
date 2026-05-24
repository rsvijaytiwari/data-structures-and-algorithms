#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int nums[] = {5, 5, 6, 8, 2, 96, 18};
    int size = sizeof(nums) / sizeof(nums[0]);
    int largest = INT_MIN;
    cout << "The largest number initialized is: " << largest << endl;
    for (int i = 0; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
        // Alternatively we can use largest = max(largest, nums[i]);
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}
