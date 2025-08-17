#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> arr(n+1);
    cout << "Enter " << n+1 << " numbers: ";
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    int duplicate = -1;
    for (int i = 0; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if (duplicate != -1) break;
    }

    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}
