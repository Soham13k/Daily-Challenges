#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    vector<string> ans;

    do {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "\"" << ans[i] << "\"";
        if (i != ans.size() - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}
