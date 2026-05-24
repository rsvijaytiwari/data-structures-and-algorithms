#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int nums[] = {5, 5, 6, 8, 2, 96, 18};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
        // Alternatively we can use smallest = min(smallest, nums[i]);
    }
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}
