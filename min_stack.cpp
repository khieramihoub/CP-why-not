class MinStack {
public:
    stack<int> mainStack; 
    stack<int> minStack; 
     MinStack() {
        //ANA 7AZIN
    }
    
    void push(int val) {
        mainStack.push(val); 
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (mainStack.empty()) return; 
        int topValue = mainStack.top(); 
        mainStack.pop(); 
        if (topValue == minStack.top()) {
            minStack.pop();
        }
    }
    
    int top() {
        if (mainStack.empty()) return -1; 
        return mainStack.top();
            }
    
    int getMin() {
        if (minStack.empty()) return -1;
        return minStack.top(); 
    }
    
};

