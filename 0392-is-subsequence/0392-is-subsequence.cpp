class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        int i=0;
        if(s.length()==0)
            return true;
            
        while(i<t.length())
        {
            if(t[i]==s[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }  
            
            if(j==s.length())
                return true;
        }
        return false;
    }
};