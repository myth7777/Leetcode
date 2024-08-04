class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int m = 1000000000+7;
        vector<int>allSubSum;

        for(int i=0; i<n; i++)
        {
            int sum = 0;
            for(int j=i; j<n; j++)
            {
                sum = (sum + nums[j])%m;
                allSubSum.push_back(sum);
            }
        }
        sort(allSubSum.begin(), allSubSum.end());

        int newSum=0;
        for(int i=left-1; i<=right-1; i++)
        {
            newSum = (newSum+allSubSum[i])%m;
        }
        return newSum;
    }
};