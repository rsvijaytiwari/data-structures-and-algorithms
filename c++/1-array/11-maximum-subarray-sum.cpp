#include <climits>
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pairs = 0;
    int ts = 0;
    int maxSum = INT_MIN;
    cout << maxSum << endl;
    for (int i = 0; i < size; i++) {
        int start = i;
        for (int j = 0; j < size; j++) {
            int end = j;
            int total = 0;
            for (int k = start; k <= end; k++) {
                total += arr[k];
            }
            if (maxSum < total) {
                maxSum = total;
            }
            ts++;
            cout << endl;
        }
    }
    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}