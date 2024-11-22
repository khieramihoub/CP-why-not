#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha XD
int main() {
    Algerian OI
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 0) {
        cout << "No" << endl;
        return 0;
    }

    int mid = n / 2;
    for (int i = 0; i < mid; ++i) {
        if (s[i] != '1') {
            cout << "No" << endl;
            return 0;
        }
    }
    if (s[mid] != '/') {
        cout << "No" << endl;
        return 0;
    }
    for (int i = mid + 1; i < n; ++i) {
        if (s[i] != '2') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
