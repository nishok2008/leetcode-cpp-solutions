class MyQueue {
public:

    stack<int> s;
    stack<int> q;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty())
        {q.push(s.top());
         s.pop();}
    }
    
    int pop() {
        return q.top();
        q.pop();
    }
    
    int peek() {
        return q.top();
    }
    
    bool empty() {
        if(q.empty())
        return true;
        else
        return false;
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