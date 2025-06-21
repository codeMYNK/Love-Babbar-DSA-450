#include <iostream>
using namespace std;

void findMaxAndMin(int arr[], int n) {
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
}

int main() {
    int arr[] = {10, 5, 20, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxAndMin(arr, n);
    return 0;
}
