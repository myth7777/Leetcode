class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>mpp;

        for(char ch:s)
            mpp[ch]++;
        
        for(int i=0; i<s.length(); i++)
        {
            if(mpp[s[i]]==1)
            {
                return i; 
            }
        }

        return -1;
    }
};