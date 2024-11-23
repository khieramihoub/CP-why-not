#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 XD
void dfs(int node , vector<vector<int>>&graph , vector<bool>&visited , int&nodes , int&edges){
    visited[node] = true ; 
    nodes++;
    edges+= graph[node].size() ; 
    for(int neighbor : graph[node]){
        if(!visited[neighbor]){
            dfs(neighbor ,graph , visited , nodes , edges);
        }
    }
}
int main() {
    Algerian OI
    //graphs awili
    int n , m; ; cin >> n >> m; 
    vector<vector<int>> graph(n+1) ; 
    for(int i = 0 ; i < m ; ++i){
        int u , v ; cin >> u >> v ;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    } 
    vector<bool> visited(n+1 , false) ; 
    int res = 0 ; 
    for(int i = 1 ; i <= n ; ++i){
        if(!visited[i]){
            int nodes = 0 ; int edges = 0 ; 
            dfs(i,graph,visited , nodes , edges) ; 
            edges /= 2 ; 
            res += edges - (nodes -1) ; 
        }
    }
    cout << res << endl ; 
    return 0;
}
