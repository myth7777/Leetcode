class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx=0;

        
        for(int i=0; i<n;)
        {
            int count=0;
            char currChar = chars[i];
            while(i<n && currChar == chars[i])
            {
                count++;
                i++;
            }
            chars[idx] = currChar;
            idx++;
            if(count>1)
            {
                string countStr = to_string(count);
                for(char c:countStr)
                    chars[idx++] = c;
            }
        }
        return idx;
    }
};