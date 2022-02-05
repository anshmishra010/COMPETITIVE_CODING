class MinimumStack {
    public:
    stack<int> st;
    int mini;
    MinimumStack() {
        mini = -1;
    }

    void append(int val) {
        if(st.empty() or mini == -1){
            st.push(val);
            mini = val;
        }
        else if(val > mini) st.push(val);
        else{
            st.push(2*val-mini);
            mini = val;
        }
    }

    int peek() {
        if(st.top()<mini) return mini;
        return st.top();
    }

    int min() {
        return mini;
    }

    int pop() {
        if(st.top()< mini){
            int temp=2*mini-st.top();
            st.pop();
            int t = mini;
            mini = temp;
            return t;
        }
        int res = st.top();
        st.pop();
        return res;
    }
};