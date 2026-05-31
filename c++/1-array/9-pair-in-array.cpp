#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pairs = 0;
    for (int i = 0; i < size; i++) {
        int current = arr[i];
        for (int j = i + 1; j < size; j++) {
            int next = arr[j];
            cout << "(" << current << "," << next << ") ";
            pairs++;
        }
        cout << endl;
    }
    cout << "Total pairs: " << pairs << endl;
    // tp = n(n-1)/2
    // O(n2)
    return 0;
}