#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pairs = 0;
    for (int i = 0; i < size; i++) {
        int start = i;
        for (int j = 0; j < size; j++) {
            int end = j;
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}