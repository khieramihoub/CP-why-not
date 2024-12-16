class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
       string ans = "" ;
       sort(a.begin(),a.end()); 
       int n = a.size() ;
       string first = a[0] ; 
       string last = a[n-1] ; 
       for(int i = 0 ; i < min(first.size(), last.size()) ; ++i){
        if(first[i]!= last[i]){
            return ans; 
        }
        ans += first[i] ; 
       } 
       return ans ; 
       

       
        }
};
