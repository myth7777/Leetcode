class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0, r=k;
        int n=nums.size();

        double sum=0;
        for(int i=0; i<k; i++)
            sum += nums[i];
        
        double avg = sum/k;
        double maxAvg = avg;

        while(r<n)
        {
            sum = sum - nums[l] + nums[r];
            avg = sum/k;
            maxAvg = max(maxAvg, avg);

            l++;
            r++;  
        }
        return maxAvg;
    }
};