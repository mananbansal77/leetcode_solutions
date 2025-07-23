class MyStack {
    queue<int>q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        int i=1;
        while(i<q1.size())
        {
            q1.push(q1.front());
            q1.pop();
            i++;
        }

        
    }
    
    int pop() {
        if(q1.empty())
        return -1;
        else
        {
            int t=q1.front();

            q1.pop();
            return t;
        }
        
    }
    
    int top() {
         if(q1.empty())
        return -1;
        else
        {
            return(q1.front());
        }

        
    }
    
    bool empty() {
        if(q1.size()==0)
        {
            return 1;

        }
        else
        return 0;
        
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
