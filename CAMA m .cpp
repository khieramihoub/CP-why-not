#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 XD

void cama_sbanyol(int n, int m) {
    if (n == 1) {
        for (int j = 0; j < m; ++j) {
            cout << '#';
        }
        cout << "AMA" << '\n';
        return;
    }
    for (int j = 0; j < m; ++j) {
        cout << '#';
    }
    cout << '\n';
    for (int i = 1; i < n - 1; ++i) {
        cout << '#'; 
        for (int j = 1; j < m; ++j) {
            cout << ' '; 
        }
        cout << '\n'; 
    }

    if (n > 1) {
        for (int j = 0; j < m; ++j) {
            cout << '#';
        }
    }
    cout << "AMA\n";
}

int main() {
    Algerian OI
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cama_sbanyol(n, m);
    }
    return 0;
}
