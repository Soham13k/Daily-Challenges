#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &arr) {
    int l = 0, m = 0, h = arr.size() - 1;
    while (m <= h) {
        if (arr[m] == 0) {
            int temp = arr[l];
            arr[l] = arr[m];
            arr[m] = temp;
            l++;
            m++;
        }
        else if (arr[m] == 1) {
            m++;
        }
        else {
            int temp = arr[m];
            arr[m] = arr[h];
            arr[h] = temp;
            h--;
        }
    }
}

int main() {
    vector<int> a = {0, 1, 2, 1, 0, 2, 1, 0};

    sort012(a);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
