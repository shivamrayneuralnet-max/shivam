class MinStack {
public:
    stack<long long>st; 
    long long mn=LLONG_MAX;
    MinStack() {  // constructor
        
    }
    
    void push(int value) {
        long long val=(long long)value;
        if(st.size()==0){
            st.push(val);
            mn=val;
        }
        else if( val>=mn) st.push(val);
        else {  // val<min  -> farzi vlue push karo
            st.push(2*val-mn);
            mn=val;
        }
    }
    
    void pop() {
        if(st.top()>=mn) st.pop();
        else{  // st.top()<min -> farzi value is present
                // beforing the pop top element ->make sure to retrive the old min element
                long long oldMin=2*mn-st.top();
                mn=oldMin;
                st.pop();
        }
    }
    
    int top() {
        if(st.top()<mn) return mn;
        else return st.top();
    }
    
    int getMin() {  // 0(1);
       return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */