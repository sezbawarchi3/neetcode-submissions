class MinStack {
    stack<int> s;
public:
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int> temp = s;
        int minn = s.top();
        while(!temp.empty()){
            int n = temp.top();
            minn = min(minn, n);
            temp.pop(); 
        }
        return minn;
    }
};
