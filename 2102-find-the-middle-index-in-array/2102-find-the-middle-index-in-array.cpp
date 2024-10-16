class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int lSum = 0, rSum=0;

        int sum = 0;

        for(int i=0; i<n; i++)
            sum += nums[i];

        for(int i=0; i<n; i++)
        {
            lSum += nums[i];
            rSum = sum - lSum;

            if(lSum-nums[i]==rSum)
                return i;
        }
        return -1;
    }
};