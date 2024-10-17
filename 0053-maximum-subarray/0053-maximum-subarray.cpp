class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            if(sum < 0)
                sum = 0;
            sum = sum + nums[i];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};