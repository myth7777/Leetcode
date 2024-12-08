class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // -----------OPTIMAL APPROACH------------
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;

            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];

                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[k] == nums[k+1]) k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return ans;
        
        // // ----------BETTER APPROACH----------
        // set<vector<int>>st;
        // int n=nums.size();
        // sort(nums.begin(), nums.end());

        // for(int i=0; i<n; i++)
        // {
        //     set<int>hashset;
        //     for(int j=i+1; j<n; j++)
        //     {
        //         int third = -(nums[i]+nums[j]);
        //         if(hashset.find(third) != hashset.end())
        //         {
        //             st.insert({nums[i], nums[j], third});
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>>ans(st.begin(), st.end());

        // return ans;

        // //----------BRUTE FORCE------------
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // set<vector<int>>ans;

        // for(int i=0; i<n; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         for(int k=j+1; k<n; k++)
        //         {
        //             if(nums[i]+nums[j]+nums[k] == 0)
        //                 ans.insert({nums[i], nums[j], nums[k]});
        //         }
        //     }
        // }
        // vector<vector<int>>fans(ans.begin(), ans.end());
        // // for(auto it:ans)
        // //     fans.push_back(it);

        // return fans;
    }
};