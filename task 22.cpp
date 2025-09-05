#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstElementToRepeatKTimes(vector<int>& arr, int k) {
    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (int num : arr) {
        if (freq[num] == k) {
            return num;
        }
    }

    return -1; 
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << firstElementToRepeatKTimes(arr, k) << endl;
    return 0;
}
