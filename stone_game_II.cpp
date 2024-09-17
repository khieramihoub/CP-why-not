class Solution {
public:
    int dp[101][101][2];

    int Hajrat(vector<int>& piles, int i, int M, int n, bool alice) {
        if(i >= n) {
            return 0;
        }
        if(dp[i][M][alice] != -1) {
            return dp[i][M][alice];
        }
        int ans = (alice == 1) ? -1 : INT_MAX;
        int stone = 0;
        for(int j = 0; j < min(2 * M, n - i); j++) {
            int idx = i + j;
            stone += piles[idx];
            if(alice) {
                ans = max(ans, stone + Hajrat(piles, idx + 1, max(j + 1, M), n, !alice));
            } else {
                ans = min(ans, Hajrat(piles, idx + 1, max(j + 1, M), n, !alice));
            }
        }
        dp[i][M][alice] = ans;
        return ans;
    }

    int stoneGameII(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return Hajrat(piles, 0, 1, piles.size(), 1);
    }
};
