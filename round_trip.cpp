#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha 
const int MAXN = 100005;
vector<int> adj[MAXN];      
vector<int> parent(MAXN, -1);
vector<bool> visited(MAXN, false);
int start = -1, endNode = -1;
bool dfs(int node, int par) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (neighbor == par) continue; 
        if (visited[neighbor]) {
            start = neighbor;
            endNode = node;
            return true;
        }
        parent[neighbor] = node;
        if (dfs(neighbor, node)) return true;
    }
    return false;
}

int main() {
   Algerian OI
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && dfs(i, -1)) break;
    }

    if (start == -1) {
        cout << "IMPOSSIBLE\n";
    } else {
        vector<int> cycle;
        cycle.push_back(start);
        for (int node = endNode; node != start; node = parent[node]) {
            cycle.push_back(node);
        }
        cycle.push_back(start);
        cout << cycle.size() << "\n";
        for (int node : cycle) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
