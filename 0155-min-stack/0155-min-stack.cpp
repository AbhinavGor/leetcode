class MinStack {
private:
    stack<pair<int,int>> mins;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(mins.empty()) {
            mins.push({val,val});
        } else {
            mins.push({val, min(mins.top().second, val)});
        }
    }
    
    void pop() {
        int temp = mins.top().second;
        mins.pop();
        if(!mins.empty()) {
            mins.top().second = max(temp, mins.top().second);
        }
    }
    
    int top() {
        return mins.top().first;
    }
    
    int getMin() {
        return mins.top().second;
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