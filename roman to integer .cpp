class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char , int> conversion = {
        {'I' , 1} , {'V' , 5} , {'X'  ,10} , {'L' , 50} , {'C' , 100} , {'D' , 500} , {'M' , 1000} 
       } ; 
       int res = 0 ; 
       for(int i = 0 ; i < s.length() ; ++i){
        if( i +1  < s.length() && conversion[s[i]] < conversion[s[i+1]]) {
            res += conversion[s[i+1]] - conversion[s[i]] ; 
            i++;
        }else {
            res += conversion[s[i]] ; 
        }
       }
       return res ; 
    }
};
