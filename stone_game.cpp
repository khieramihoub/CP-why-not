class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>> dp(n, vector<int>(n));
        
        for (int t = 0; t < n; ++t) {
            for (int i = 0, j = t; j < n; ++i, ++j) {
                if (t == 0) {
                    dp[i][j] = piles[i]; 
                } 
                else if (t == 1) {
                    dp[i][j] = max(piles[i], piles[j]);
                } 
                else {
                    int a = piles[i] + min(dp[i + 2][j], dp[i + 1][j - 1]); 
                    int b = piles[j] + min(dp[i + 1][j - 1], dp[i][j - 2]); 
                    dp[i][j] = max(a, b); 
                }
            }
        }
        
        return true;
    }
};
