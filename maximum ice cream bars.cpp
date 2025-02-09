class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
            const int MAX_COST = 100000;
    vector<int> freq(MAX_COST + 1, 0);

    for (int cost : costs) {
        freq[cost]++;
    }

    int count = 0;

    for (int price = 1; price <= MAX_COST; price++) {
        if (freq[price] == 0) continue; 
        
        int buy = min(freq[price], coins / price); 
        count += buy;
        coins -= buy * price;
        
        if (coins < price) break;
            }

    return count;

    }
};
