class MyQueue {
public:
    MyQueue() {
        
    }
     stack<int> s, s1;
    void push(int x) {
        while(!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }
        // Now once stack s is empty we will push the new element, this will represent our new rear element.
        s.push(x);

        // Now bring the elements back from s1 to s.
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
    }
    }
    
    int pop() {
        int x = s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */