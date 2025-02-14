class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end()) ; 
        int max_length  = 0 ; 
        for(int num : nums ){
            if(!set.count(num - 1)){
                int current_num = num ; 
                int current_length = 1 ; 
                while(set.count(current_num + 1)){
                    current_num++; 
                    current_length++;
                }
                            max_length = max(max_length , current_length);

            }
        
        }
        return max_length ; 
    }
};
