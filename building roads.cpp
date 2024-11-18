#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha 
const int MAXN = 100000;
vector<int> graph[MAXN+1]; 
bool visited[MAXN+1] ; 
void dfs(int node , vector<int>& components){
    visited[node] = true ; 
    components.push_back(node); 
    for(int neighbor : graph[node]){
        if(!visited[neighbor]){
            dfs(neighbor , components);
        }
    }

}

int main() {
    Algerian OI
    int n , m ; cin >> n >> m ;
    for(int i = 0 ; i <  m ; ++i){
        int a , b ; cin >> a >> b ; 
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
vector<vector<int>> components;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, component);
            components.push_back(component);
        }
    }

    int new_roads = components.size() - 1;
    cout << new_roads << endl;
    for (int i = 1; i < components.size(); i++) {
        cout << components[i - 1][0] << " " << components[i][0] << endl;
    }

    return 0;
}
   
