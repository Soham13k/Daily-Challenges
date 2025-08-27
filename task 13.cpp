#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    int start = 0, maxLen = 1;

    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        return make_pair(left + 1, right - 1);
    };

    for (int i = 0; i < n; i++) {
        auto p1 = expand(i, i);
        int len1 = p1.second - p1.first + 1;
        if (len1 > maxLen) {
            start = p1.first;
            maxLen = len1;
        }

        auto p2 = expand(i, i + 1);
        int len2 = p2.second - p2.first + 1;
        if (len2 > maxLen) {
            start = p2.first;
            maxLen = len2;
        }
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}
