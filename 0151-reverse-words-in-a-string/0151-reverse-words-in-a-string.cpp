class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string subStr = "";
        string ans = "";
        for (int i =0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                if(!subStr.empty())
                {
                    st.push(subStr);
                    subStr="";
                }
            }
            else
            {
                subStr += s[i];
            }
        }
        if (!subStr.empty()) 
        {
            st.push(subStr);
        }
        while(st.size()!=1)
        {
            ans += st.top()+" ";
            st.pop();
        }
        ans += st.top();
        return ans;
    }
};