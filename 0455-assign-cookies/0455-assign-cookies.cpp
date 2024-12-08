class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int nChild = g.size();
        int nCookies = s.size();
        int l=0, r=0;
        int cnt = 0;

        while(l<nChild && r<nCookies)
        {
            if(g[l]<=s[r])
            {
                l++;
                r++;
                cnt++;
            }
            else
            {
                r++;
            }
        }
        return cnt;
    }
};