class Solution {
public:
    int count(int n) {
        int div = 0, four = 0;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                if (i == n / i) {
                    four++;  
                    div += i;  
                } else {
                    four += 2;  
                    div += (i + n / i);  
                }
            }
            if (four > 4) return 0;
        }
        return (four == 4) ? div : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        for (int num : nums) {
            res += count(num);
        }
        return res;
    }
};
