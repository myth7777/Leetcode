class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        stack<char> st;
        string str = "";

        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                if(st.size()>0)
                {
                    str = str + s[i];
                }
                st.push(s[i]);
            }
            else{
                st.pop();
                if(st.size()>0)
                {
                    str = str + s[i];
                }
            }
        }
        return str;
    }
};