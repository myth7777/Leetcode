class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        if(k<0) return 0;
        map<int,int>mp;
        
        for(auto it:nums)
            mp[it]++;

        for(auto i:mp)
        {
            if(k==0)
            {
                if(i.second > 1)
                {
                    cnt++;
                }
            }
            else
            {
                if(mp.find(i.first+k) != mp.end())
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};