class MyQueue {
private: 
    stack<int> main;
    int front;
    int size = 0;

public:
    MyQueue() {}
    
    void push(int x) {
        if (main.empty()) front = x;
        main.push(x);
        size++;
    }
    
    int pop() {
        stack<int> side;
        for (int i = 0; i < size - 1; i++) {
            side.push(main.top());
            main.pop();
        }
        int oldFront = main.top();
        main.pop();
        size--;

        if (!side.empty()) front = side.top();

        while (!side.empty()) {
            main.push(side.top());
            side.pop();
        }
        return oldFront;
    }
    
    int peek() {
        return front;
    }
    
    bool empty() {
        return main.empty();
    }
};