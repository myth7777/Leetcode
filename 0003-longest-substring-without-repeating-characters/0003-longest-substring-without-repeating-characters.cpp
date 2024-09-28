class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==0)
            return 0;
        
        vector<int>mpp(256, -1);
        int n = s.length();
        int l=0,r=0;
        int maxLength = 0;

        while(r<n)
        {
            if(mpp[s[r]] != -1) //already in the array
                l = max(mpp[s[r]]+1, l);
            
            mpp[s[r]] = r;
            maxLength = max(maxLength, r-l+1);
            r++;
        }
        return maxLength;
    }
};