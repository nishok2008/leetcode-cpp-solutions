class MyStack {
public:
    queue<int> q;
    queue<int> s;

    MyStack() {}

    void push(int x) {
        s.push(x);

        while (!q.empty()) {
            s.push(q.front());
            q.pop();
        }

        swap(q, s);
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};