class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        int n1 = nums1.size();
        int n2 = nums2.size();

        set<int>a(nums1.begin(), nums1.end());
        set<int>b(nums2.begin(), nums2.end());

        for(auto i:a)
        {
            if(b.find(i)==b.end())
                ans[0].push_back(i);
        }
        
        for(auto i:b)
        {
            if(a.find(i)==a.end())
                ans[1].push_back(i);
        }
        return ans;
    }
};