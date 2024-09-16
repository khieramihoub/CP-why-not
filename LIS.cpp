class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    vector<int> LIS;
    for(int n : nums){
     auto iterate = lower_bound(LIS.begin(),LIS.end(),n );
     if(iterate == LIS.end()){
        LIS.push_back(n);
     }
     else{
        *iterate = n;
     }
     }
     return LIS.size();
    }
};
