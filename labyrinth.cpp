#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha 
const int MAXN = 1005;
vector<string> labyrinth;
pair<int, int> parent[MAXN][MAXN];
bool visited[MAXN][MAXN];
int dx[] = {-1, 1, 0, 0};        
int dy[] = {0, 0, -1, 1};
char directions[] = {'U', 'D', 'L', 'R'};
int n, m;

bool est_ce_que_wah(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && labyrinth[x][y] != '#';
}

string find_wah(pair<int, int> end) {
    string tari9;
    auto [x, y] = end;
    while (labyrinth[x][y] != 'A') {
        auto [px, py] = parent[x][y];
        for (int i = 0; i < 4; ++i) {
            if (px + dx[i] == x && py + dy[i] == y) {
                tari9 += directions[i];
                break;
            }
        }
        x = px;        y = py;
    }
    reverse(tari9.begin(), tari9.end());
    return tari9;
}

void bfs(pair<int, int> start) {
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (est_ce_que_wah(nx, ny)) {
                visited[nx][ny] = true;
                parent[nx][ny] = {x, y};
                q.push({nx, ny});
                if (labyrinth[nx][ny] == 'B') {
                    cout << "YES\n";
                    string tari9 = find_wah({nx, ny});
                    cout << tari9.size() << '\n' << tari9 << '\n';
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

int main() {
    Algerian OI
    cin >> n >> m;
    labyrinth.resize(n);
    pair<int, int> start, end;

    for (int i = 0; i < n; ++i) {
        cin >> labyrinth[i];
        for (int j = 0; j < m; ++j) {
            if (labyrinth[i][j] == 'A') start = {i, j};
            if (labyrinth[i][j] == 'B') end = {i, j};
        }
    }
    memset(visited, false, sizeof(visited));
    bfs(start);

    return 0;
}

