class Solution {
public:
    bool isValid(string s) {
        

        stack<char> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                 char a;
                if(st.size()>0)
                {
                   a=st.top();
              
                   if(a=='(' && s[i]==')' || a=='{' && s[i]=='}' || a=='[' && s[i]==']')
                  {
                    st.pop();
                  }
                  else
                  {
                    st.push(s[i]);
                  }
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }

        if(st.size()==0)
        {
           return true;
        }

        return false;
        
    }
};