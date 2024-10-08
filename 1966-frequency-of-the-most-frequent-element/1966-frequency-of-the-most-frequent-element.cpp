class Solution {
public:

    int bs(vector<int> &nums, vector<long> &prefixSum, int targetIdx, int k)
    {
        int target = nums[targetIdx];

        int l=0;
        int r=targetIdx;
        int bestIdx = targetIdx;

        while(l<=r)
        {
            int mid = l + (r-l)/2;
            long count = (targetIdx - mid + 1);

            long winSum = target*count;
            long currSum = prefixSum[targetIdx] - prefixSum[mid] + nums[mid];

            int ops = winSum - currSum;

            if(ops>k)
            {
                l = mid+1;
            }
            else
            {
                bestIdx = mid;
                r = mid-1;
            }
        }
        return targetIdx-bestIdx+1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();

        sort(nums.begin(), nums.end());

        vector<long> prefixSum(n);

        prefixSum[0] = 0;
        for(int i=1; i<n; i++)
            prefixSum[i] = prefixSum[i-1] + nums[i];
        

        int result = 0;
        for(int targetIdx = 0; targetIdx < n; targetIdx++)
        {
            result = max(result, bs(nums, prefixSum, targetIdx, k));
        }

        return result;
    }
};