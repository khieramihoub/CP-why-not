class Solution {
public:
    bool isValid(string s) {
      stack<char> wah; 
       unordered_map<char, char> kawsayn = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        for (char c : s) {
            if (kawsayn.count(c)) {
                wah.push(c); 
            } 
            else {
                if (wah.empty() || kawsayn[wah.top()] != c) {
                    return false; 
                }
                wah.pop(); 
            }
        }
        return wah.empty();
    }
};
