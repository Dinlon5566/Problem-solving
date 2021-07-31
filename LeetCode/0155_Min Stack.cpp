class MinStack {
private:
    stack<int> pool;
    stack<int> minPool;
public:

    void push(int val) {
        pool.push(val);
        if(minPool.empty()||val<=getMin()){
            minPool.push(val);
        }
    }

    void pop() {
        if(pool.top()==getMin()){
            minPool.pop();
        }
        pool.pop();
    }

    int top() {
        return pool.top();
    }

    int getMin() {
        return minPool.top();
    }
};
