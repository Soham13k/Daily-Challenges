#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cout << "Enter size of arr1: ";
    cin >> m;
    cout << "Enter size of arr2: ";
    cin >> n;

    vector<int> arr1(m), arr2(n);

    cout << "Enter elements of arr1 (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of arr2 (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            swap(arr1[i], arr2[0]);
            sort(arr2.begin(), arr2.end());
        }
    }

    cout << "arr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    return 0;
}
