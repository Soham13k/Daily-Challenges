#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int,int>> result;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                result.push_back({i, j});
            }
        }
    }

    if (result.empty()) {
        cout << "[]" << endl;
    } else {
        cout << "[";
        for (int i = 0; i < result.size(); i++) {
            cout << "(" << result[i].first << ", " << result[i].second << ")";
            if (i != result.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
