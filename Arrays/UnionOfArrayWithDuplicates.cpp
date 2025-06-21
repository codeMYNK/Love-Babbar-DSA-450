#include <iostream>
#include <unordered_set>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }

    for (int i = 0; i < m; i++) {
        s.insert(b[i]);
    }

    return s.size(); // Total unique elements
}

int main() {
    int a[] = {1, 2, 1, 1, 2};
    int b[] = {2, 2, 1, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    cout << "Union Count: " << doUnion(a, n, b, m) << endl;
    return 0;
}
