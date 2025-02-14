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
}; /// tlee lmaoo 
//this code is correct 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ;
        sort(nums.begin() , nums.end()) ; 
        int max_length = 1 , current_length = 1 ; 
        for(int i = 1 ; i < nums.size() ; ++i){
            if(nums[i] == nums[i-1]) continue ; 
            if(nums[i] == nums[i-1] + 1){
                current_length++ ; 
            }else{
                max_length = max(max_length, current_length) ; 
                current_length = 1 ; 
            }
        }
    return max(max_length,current_length) ; 
    }
};
