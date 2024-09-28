class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0;
        int n = nums.size();
        int len;
        int maxLen = 0;
        int zeros = 0;

        while(r<n)
        {
            if(nums[r]==0)
                zeros++;
            
            while(zeros>k)
            {
                if(nums[l]==0)
                    zeros--;

                l++;
            }
            if(zeros<=k)
            {
                len = r-l+1;
                maxLen = max(maxLen, len);
            }
            r++;
        }
        return maxLen;
    }
};