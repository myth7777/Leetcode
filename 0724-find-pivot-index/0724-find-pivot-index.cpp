class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0, totalSum=0;
        int rightSum;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            totalSum += nums[i];
        }

        for(int i=0; i<n; i++)
        {
            leftSum += nums[i];
            rightSum = totalSum - leftSum;

            if(leftSum - nums[i] == rightSum)
                return i;
        }
        return -1;
    }
};