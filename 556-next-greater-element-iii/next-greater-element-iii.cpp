class Solution {
public:
    bool outOfInt(string s)
    {
        if(s.size() > 10)return true;
        else if(s.size() <= 9)return false;
        string maxint = "2147483647";
        for(int i = 0; i < 10; i++)
        {
            if(s[i] > maxint[i])return true;
            else if(s[i] < maxint[i])return false;
        }
        return false;
    }
    int nextGreaterElement(int n) {
        string num = to_string(n);
        stack<char> stk;
        int idx = -1;
        for(int i = num.size() - 1; i >= 0; i--)
        {
            //cout<<i<<' '<<num[i]<<endl;
            if(stk.size() == 0 || num[i] >= num[stk.top()])
                stk.push(i);
            else
            {
                while(stk.size() && num[i] < num[stk.top()])
                {
                    idx = stk.top();
                    stk.pop();
                }
                swap(num[i],num[idx]);
                sort(num.begin()+ i + 1, num.end());
                break;
            }
        }
        if(idx == -1||outOfInt(num))return -1;
        return stoi(num);
    }
};