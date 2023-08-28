class MyStack {
private:
    queue<int> q, temp;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!q.empty()) {
            temp.push(q.front());
            cout<<q.front()<<endl;
            q.pop();
        }
        
        q = temp;
        temp = {};
    }
    
    int pop() {
        int res = q.front();
        q.pop();
        
        return res;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */