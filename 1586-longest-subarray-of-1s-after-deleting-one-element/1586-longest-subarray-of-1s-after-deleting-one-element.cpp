class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxLen= INT_MIN;
        int l=0, r=0;
        int n = nums.size();

        int zeroCnt=0;

        while(r<n)
        {
            if(nums[r]==0)
                zeroCnt++;
            while(zeroCnt>1)
            {
                if(nums[l]==0)
                    zeroCnt--;
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;    
        }
        return maxLen-1;
    }
};