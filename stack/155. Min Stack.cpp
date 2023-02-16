class MinStack {

    ::stack<int> stack;
    ::stack<int> minStack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if(minStack.empty()) minStack.push(val);
        else minStack.push(min(val,minStack.top()));
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
