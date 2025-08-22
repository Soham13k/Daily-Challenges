#include <bits/stdc++.h>
using namespace std;

string reverseWords(const string &s) {
    istringstream in(s);
    vector<string> words;
    string word;

    while (in >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) result += " ";
        result += words[i];
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);   
    cout << reverseWords(s) << endl;
    return 0;
}
