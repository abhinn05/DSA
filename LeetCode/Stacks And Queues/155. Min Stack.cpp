class MinStack {
    private:
    stack<int> s;
    stack<int> minS;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minS.empty()) minS.push(val);
        else minS.push(min(val,minS.top()));
    }
    
    void pop() {
        s.pop();
        minS.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
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