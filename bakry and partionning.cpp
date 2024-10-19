#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
bool dfs(int node, int parent, int wah_xor, vector<int>& values, vector<vector<int>>& adj, vector<int>& nos_xor, int& count) {
    int current_xor = values[node];
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            if (dfs(neighbor, node, wah_xor, values, adj, nos_xor, count)) {
                return true;
            }
            current_xor ^= nos_xor[neighbor];
        }
    }
    nos_xor[node] = current_xor;
    if (current_xor == wah_xor) {
        count++;
        nos_xor[node] = 0;
        if (count == 2) {
            return true;
        }
    }
    return false;
    }
int main() {
    KHEIRA WAH
    int t ; cin >> t;
    while(t--){
        int n , k ; cin >> n >> k ; 
        vector<int> values(n+1) ; 
        vector<vector<int>> adj(n+1) ; 
        for(int i = 1 ; i <= n ; ++i){
            cin >> values[i] ; 
        }
        for(int i = 0  ; i < n-1  ; ++i){
            int u , v ; cin >> u >> v ; 
            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }
        int wah_xor = 0 ;  
        for(int i = 1 ; i <= n ; ++i ){
            wah_xor ^= values[i] ; 
        }
        if(wah_xor == 0 ){
            cout << "YES" << endl ; 
            continue;
        }
        vector<int> nos_xor(n+1, 0 );
            int count = 0 ; 
            bool possible = dfs(1, -1, wah_xor, values, adj, nos_xor, count);
        if (possible && k > 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        }
    
    return 0;
}


// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
//⣿⣿⡿⠋⠄⡀⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⣉⣉⣉⡉⠙⠻
//⣿⣿⣇⠔⠈⣿⣿⣿⣿⡿⠛⢉⣤⣶⣾⣿⣿⣿⣿⣿⣿⣦
//⣿⠃⠄⢠⣾⣿⣿⠟⢁⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⡟⠁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⠋⢠⣾⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿
//⡿⠁⣰⣿⣿⣿⣿⣿⣿⣿⣿⠗⠄⠄⠄⠄⣿⣿⣿⣿⣿⣿
//⠁⣼⣿⣿⣿⣿⣿⣿⡿⠋⠄⠄⠄⣠⣄⢰⣿⣿⣿⣿⣿⣿
//⣼⣿⣿⣿⣿⣿⣿⡇⠄⢀⡴⠚⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⢰⣿⣿⣿⣿⣿⡿⣿⣿⠴⠋⠄⠄⢸⣿⣿⣿⣿⣿⣿⣿⡟
//⣿⣿⣿⣿⣿⣿⠃⠈⠁⠄⠄⢀⣴⣿⣿⣿⣿⣿⣿⣿⡟⢀
//⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄⢶⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⣾
//⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⠋⣠⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣼⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⣿⣿⣿⣿
//⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⢁⣴⣿⣿⣿⠗⠄⠄⣿
//⠈⠻⣿⣿⣿⣿⣿⣿⠿⠛⣉⣤⣾⣿⣿⣿⣿⣇⠠⠺⣷⣿
//⣦⣄⣈⣉⣉⣉⣡⣤⣶⣿⣿⣿⣿⣿⣿⣿⠉⠁⣀⣼⣿⣿



