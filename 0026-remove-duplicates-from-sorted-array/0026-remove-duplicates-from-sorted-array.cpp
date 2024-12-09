class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int>st;

        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]);
        }
        int k = st.size();

        int idx=0;
        for(auto it:st)
        {
            nums[idx++] = it;
        }
        return k;
    }
};