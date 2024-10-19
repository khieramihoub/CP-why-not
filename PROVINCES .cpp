class Solution {
public:
    void bfs(int city , vector<vector<int>>& isConnected , vector<bool>& visited ){
        queue<int> q ; 
        q.push(city) ; 
        visited[city] = true ; 
        while(!q.empty()){
            int curr = q.front();
            q.pop() ; 
            for(int i = 0 ; i< isConnected.size() ; ++i){
                if(isConnected[curr][i] == 1 && !visited[i]){
                    visited[i] = true ; 
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        int province = 0 ; 
        for(int i = 0  ; i < isConnected.size() ; ++i){
            if(!visited[i]){
                bfs(i,isConnected , visited) ; 
                province++;
            }
        }
        return province ; 
    }
};
