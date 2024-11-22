#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 XD
void find_path(int start , int end , vector<vector<int>>&chajara , vector<int>&path){
    int n = chajara.size() ; 
    vector<bool> visited(n,false) ; 
    vector<int> parent(n , -1) ; 
    stack<int> s ; 
    s.push(start) ; 
    visited[start] = true ; 
    while(!s.empty()){
        int node = s.top();
        s.pop();
        if(node == end) break ; 
        for(int neighbor : chajara[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true  ; 
                parent[neighbor] = node; 
                s.push(neighbor);
            }
        }
    }
    int current = end ; 
    while(current != -1){
        path.push_back(current);
        current = parent[current] ; 
        }
        reverse(path.begin(),path.end()) ;
}
int main() {
    Algerian OI
    //DFS DFS MON AMOR <3
    int n , x , y ; cin >> n >> x >> y ; 
    vector<vector<int>> chajara(n+1) ; 
    for(int i = 0 ; i < n-1 ; ++i){
        int u , v ; cin >> u >> v ; 
        chajara[u].push_back(v) ; 
        chajara[v].push_back(u) ; 
    }
    vector<int> path ; 
    find_path(x,y,chajara,path) ; 
    for(int node : path){
        cout << node << " " << endl ; 
    }
    cout << endl; 
    return 0;
}
