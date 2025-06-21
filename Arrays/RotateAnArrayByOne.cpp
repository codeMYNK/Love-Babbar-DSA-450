#include <iostream>
#include <vector>
using namespace std;

// Function to rotate array by one position clockwise
void rotateArrayByOne(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return;

    int last = arr[n - 1];  // Step 1: Save last element

    // Step 2: Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 3: Place the last element at the beginning
    arr[0] = last;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    rotateArrayByOne(arr);

    cout << "Rotated Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
