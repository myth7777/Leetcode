class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int>mp;
        int n = nums.size();

        for(auto it:nums)
            mp[it]++;
        
        int cnt=0;

        for(auto it:mp)
        {
            int curNum = it.first;
            int req = k-curNum;

            if(mp.find(req) != mp.end())
            {
                if(curNum == req)
                    cnt += mp[curNum]/2;
                
                else
                    cnt += min(mp[curNum], mp[req]);
                
                mp[curNum]=0;
                mp[req]=0;
            }
        }
        return cnt;
    }
};