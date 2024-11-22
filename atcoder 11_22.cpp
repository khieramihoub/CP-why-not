#include <bits/stdc++.h>
using namespace std;

#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);

int main() {
    Algerian OI
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }
    vector<int> wah(26, 0);
    for (char c : s) {
        wah[c - 'a']++;
    }
    for (int count : wah) {
        if (count != 0 && count != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i += 2) {
        if (s[i] != s[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
