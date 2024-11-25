#include <bits/stdc++.h>
using namespace std;
//template te3 red1 khwntha
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);

int main() {
    Algerian OI
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    int maxSize = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
                if (dp[i][j] > maxSize) {
                    maxSize = dp[i][j];
                    count = 1;
                } else if (dp[i][j] == maxSize) {
                    ++count;
                }
            }
        }
    }
    cout << maxSize * count << endl;
    return 0;
}
