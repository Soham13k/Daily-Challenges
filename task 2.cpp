#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " numbers from 1 to " << n << " : ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n-1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Missing number: " << i << endl;
            break;
        }
    }

    return 0;
}
