#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<pair<int, int>> blocks;  
    
    int i = 0;
    while (i < n) {
        if (s[i] == '1') {
            int start = i;
            while (i < n && s[i] == '1') ++i;
            int end = i - 1;
            blocks.push_back({start, end});
        } else {
            ++i;
        }
    }
    auto [startKminus1, endKminus1] = blocks[k - 2];
    auto [startK, endK] = blocks[k - 1];
    string res = s;
    for (int i = startK; i <= endK; ++i) {
        res[i] = '0';
    }
    for (int i = endKminus1 + 1; i <= endKminus1 + (endK - startK + 1); ++i) {
        res[i] = '1';
    }

    cout << res << endl;

    return 0;
}
