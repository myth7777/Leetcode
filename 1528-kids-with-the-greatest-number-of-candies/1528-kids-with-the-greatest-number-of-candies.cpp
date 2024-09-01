class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans(n, false);
        int ec = extraCandies;
        
        int currMax = *max_element(candies.begin(), candies.end());

        for(int i=0; i<n; i++)
        {
            int cand = candies[i]+ec;
            if(cand>=currMax)
                ans[i]=true;
        }
        return ans;

    }
};