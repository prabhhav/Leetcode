class MyStack {
private:
    queue<int>q;
public:
    /** Initialize your data structure here. */
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {  
        q.push(x);
        int tmp;
        for(int i = 0; i < q.size() - 1; i++){
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();    
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};