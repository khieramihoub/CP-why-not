#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
#define MAXN 1005 
//khwnt template te3 red1 
vector<string> grid; 
bool visited[MAXN][MAXN]; 
int dx[] = {-1, 1, 0, 0}; 
int dy[] = {0, 0, -1, 1}; 
int n, m; 

bool est_ce_que_wah(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] == '.';
}

void dfs(int x, int y) {
    stack<pair<int, int>> s; 
    s.push({x, y}); 
    visited[x][y] = true; 
    
    while (!s.empty()) {
        auto [cx, cy] = s.top(); 
                s.pop(); 
        
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i]; 
            int ny = cy + dy[i]; 
            if (est_ce_que_wah(nx, ny)) {
                visited[nx][ny] = true; 
                s.push({nx, ny});
            }
        }
    }
}

int main() {
    Algerian OI 
    cin >> n >> m; 
    grid.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    int res = 0; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && grid[i][j] == '.') {
                dfs(i, j); 
                res++;
            }
        }
    }
    cout << res << endl; 
    return 0; 
}
