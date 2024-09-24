class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();

        // for (int i=1; i<=n-2; i++)
        // {
        //     if(nums[i]<nums[i+1] && nums[i]>nums[i-1])
        //         return true;
        // }
        // return false; 

        if(n<3)
            return false;

        int num1 = INT_MAX;
        int num2 = INT_MAX;

        for(int num3:nums)
        {
            if(num3<=num1)
                num1 = num3;

            else if(num3<=num2)
                num2 = num3;

            else
                return true; 
        }
        return false;
        
        
    }
};