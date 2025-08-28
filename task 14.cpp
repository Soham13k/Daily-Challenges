#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

long long countAtMostK(const string &s, int k) {
    int n = s.size();
    unordered_map<char, int> freq;
    long long res = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        freq[s[right]]++;

        while ((int)freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }

        res += (right - left + 1);
    }

    return res;
}

long long substrExactlyK(const string &s, int k) {
    if (k == 0) return 0;
    return countAtMostK(s, k) - countAtMostK(s, k - 1);
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << substrExactlyK(s, k) << endl;
    return 0;
}
