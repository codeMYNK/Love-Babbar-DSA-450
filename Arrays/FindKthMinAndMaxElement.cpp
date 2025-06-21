#include <iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int minIndex = i;

        // Find the minimum element from i to n-1
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum with the i-th element
        swap(arr[i], arr[minIndex]);
    }

    // After k iterations, kth smallest will be at index k-1
    return arr[k - 1];
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Kth Smallest Element: " << kthSmallest(arr, n, k) << endl;
    return 0;
}
