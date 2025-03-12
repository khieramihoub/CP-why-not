#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
#define k 1000000 
//TLETLETLETLETLE
int main(){
    KHEIRA WAH 
    int t;  cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> wah(n);
        for (int i = 0; i < n; ++i) {
            cin >> wah[i];
        }
        vector<vector<int>> a(n, vector<int>(m, INT_MAX));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (wah[i][j] == '1') {
                    a[i][j] = 0; 
                    q.push({i, j});
                }
            }
        }
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();
            int x = curr.first;
            int y = curr.second;
            for (int i = 0; i < 4; ++i) {
                int gnx = x + dx[i];
                int gny = y + dy[i];
                if (gnx >= 0 && gnx < n && gny >= 0 && gny < m && a[gnx][gny] == INT_MAX) {
                    a[gnx][gny] = a[x][y] + 1;
                    q.push({gnx, gny});
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << a[i][j] << (j == m - 1 ? "" : " ");
            }
            cout << endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }
return 0 ; 
}
