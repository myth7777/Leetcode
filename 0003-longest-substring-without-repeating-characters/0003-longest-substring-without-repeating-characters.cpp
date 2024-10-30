class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int n = s.length();
        int l=0, r=0;
        
        map<char, int>mpp;

        while(r<n)
        {
            if(mpp.find(s[r]) != mpp.end())
            {
                l = max(mpp[s[r]] + 1, l);
            }    
            mpp[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};