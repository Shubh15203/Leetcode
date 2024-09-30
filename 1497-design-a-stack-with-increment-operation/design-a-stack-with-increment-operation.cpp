class CustomStack {
public:
    int m;
    int n=0;
    vector<int> arr;
    stack<int> st;
    CustomStack(int m) {
        this->m = m;
    }
    

    void push(int x) {
        if(n==m) return ;
        else{
            st.push(x);
            n++;
            arr.push_back(x);
        }
    }
    
    int pop() {
        if(st.empty()) return -1;
        n--;
        int x=st.top();
        st.pop();
        arr.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k;i++){
            if(i==arr.size()) break;
            arr[i]+=val;
        }
        while(!st.empty()) st.pop();
        for(int i=0;i<arr.size();i++)
        st.push(arr[i]);
        n = st.size();
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */