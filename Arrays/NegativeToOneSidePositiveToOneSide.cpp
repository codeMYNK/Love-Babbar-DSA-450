#include <iostream>
#include <vector>
using namespace std;

void moveNegativesToFront(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main() {
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    moveNegativesToFront(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
