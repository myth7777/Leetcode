class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // ---------SLIDING WINDOW----------
        int n = nums.size();
        int maxLen = 0;
        int l=0, r=0, zeros=0;

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
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
        
        // //--------BRUTE FORCE--------
        // int n=nums.size();
        // int maxLen = 0;

        // for(int i=0; i<n; i++)
        // {
        //     int zeros=0;
        //     for(int j=i; j<n; j++)
        //     {
        //         if(nums[j]==0)
        //             zeros++;
                
        //         if(zeros<=k)
        //         {
        //             maxLen = max(maxLen, j-i+1);
        //         }
        //         else
        //             break;
        //     }
        // }
        // return maxLen;
    }
};