class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        vector<int> zero_edges(n,0) ; 
        for(const auto& edge : edges ) {
            zero_edges[edge[1]]++;
        }
        vector<int> results ;
        for(int i = 0 ; i < n ; ++i){
            if(zero_edges[i] == 0){
                results.push_back(i);
            }
        }
                    return results ; 

    }
};
