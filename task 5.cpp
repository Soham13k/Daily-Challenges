#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int leaders[n];  
    int count = 0;    

    int maxFromRight = arr[n-1];
    leaders[count++] = maxFromRight; 

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    cout << "Leaders: ";
    
    for (int i = count-1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;

    return 0;
}
