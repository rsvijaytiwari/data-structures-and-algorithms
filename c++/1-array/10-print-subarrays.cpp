#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pairs = 0;
    int ts = 0;

    for (int i = 0; i < size; i++) {
        int start = i;
        for (int j = 0; j < size; j++) {
            int end = j;
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            ts++;
            cout << endl;
        }
    }
    cout << "Total subarrays: " << ts << endl;
    return 0;
}