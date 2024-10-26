//shout out to tOntOn
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> hissab; 
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "/" || token == "*") {
                int b = hissab.top(); hissab.pop(); 
                int a = hissab.top(); hissab.pop(); 
                 if (token == "+") {
                    hissab.push(a + b);
                } else if (token == "-") {
                    hissab.push(a - b);
                } else if (token == "*") {
                    hissab.push(a * b);
                } else if (token == "/" && b!= 0 ) {
                    hissab.push(a / b);
                }
            } else {
                hissab.push(stoi(token));
            }
        }
        return hissab.top();
    }
};
