#include <iostream>
using namespace std;

int main() {
    // Linear Search Algorithm using loop to check the target the index while searching.
    int nums[] = {5, 5, 6, 8, 2, 96, 18};
    int target = 96;
    for (int i = 0; i < (sizeof(nums) / sizeof(nums[0])); i++) {
        if (nums[i] == target) {
            cout << "The target " << target << " is found at index: " << i << endl;
            break; // Exit the loop once the target is found
        }
    }
    return 0;
}
