class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total = m+n;
        vector<int>ans={};

        int sum=0;
        for(int i=0; i<m; i++){
            sum+=rolls[i];
        }
        int rem_sum = mean*total - sum;

        if(rem_sum<n || rem_sum>(n*6))
            return ans;
        
        else
        {
            int full = rem_sum/n;
            int extra = rem_sum%n;
            for(int i=0;i<n;i++)
            {
                if(extra>0)
                    ans.push_back(full+1);
                else
                    ans.push_back(full);

                extra = max(0,extra-1);
            }
        }

        return ans;
    }
};