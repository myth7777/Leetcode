class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> prefixSum(n+1, 0);
        
        for(int i=1; i<=n; i++)
        {
             prefixSum[i] = prefixSum[i-1] + gain[i-1];
        }
        return *max_element(prefixSum.begin(), prefixSum.end());
    }
};