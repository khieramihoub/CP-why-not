class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if( n == 1) return 1; 
        vector<int> a(n+1 , 0) ; 
        vector<int> b (n+1 , 0) ; 
        for(auto& t : trust){
            b[t[0]]++;
            a[t[1]]++;
        }
    for(int i = 1; i <= n ; ++i){
        if(a[i] == n-1 && b[i] == 0 ) return i ; 
    }            return -1;

    }
};
