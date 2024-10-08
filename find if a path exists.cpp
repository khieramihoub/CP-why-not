class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination){
            return true ;  } 
        vector <vector<int>> al(n) ; 
        for(auto& edge : edges ) {
            al[edge[0]].push_back(edge[1]) ; 
            al[edge[1]].push_back(edge[0]);
               }
        queue<int> q ; 
        vector<bool> visited(n,false) ; 
        q.push(source) ; 
        visited[source] = true ; 
        while(!q.empty()){
            int node = q.front() ; 
            q.pop() ;
            for(int neigh : al[node]){
                if(neigh == destination) return true;
                if(!visited[neigh]){visited[neigh] = true; q.push(neigh); 
                   }
            }
        }
        return false ; 
    }
};
