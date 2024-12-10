class Solution {
public:
    int maximumLength(string s) {
        map<string, int>mpp;
        int n = s.size();

        for(int i=0; i<n; i++)
        {
            string curStr="";
            for(int j=i; j<n; j++)
            {
                if(curStr.empty() || curStr[curStr.size()-1] == s[j])
                {
                    curStr.push_back(s[j]);
                    mpp[curStr]++;
                }
                else
                {
                    break;
                }
            }
        }

        int maxLen = 0;

        for(auto it:mpp)
        {
            string str = it.first;
            int cnt = it.second;

            if(cnt>=3 && str.length()>maxLen)
                maxLen = str.length();
        }
        return maxLen == 0 ? -1 : maxLen ;
    }
};