class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
int pop() {
    queue<int> secondary;
    int sol = q.back();
    int size = q.size() - 1; 

    while (size--) {
        secondary.push(q.front());
        q.pop();
    }
    q.pop(); 
    q.swap(secondary);
    return sol;
}
    
    int top() {
        return(q.back());
    }
    
    bool empty() {
        return(q.empty());
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