class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size() ; 
        int toul = 0 ;
        unordered_set<int> s(arr.begin(), arr.end());  
        for(int i = 0 ; i < n ; ++i){
            for(int j = i+1 ; j<n ; ++j){
                int x = arr[i] ; 
                int y = arr[j] ; 
                int length = 2 ; 
                 while (s.find(x + y) != s.end()) {
                    int z = x + y;
                    x = y;
                    y = z;
                    length++;  
                }
                toul = max(toul,length) ; 

            }
        }

        return toul > 2 ? toul : 0 ; 
    }
};
