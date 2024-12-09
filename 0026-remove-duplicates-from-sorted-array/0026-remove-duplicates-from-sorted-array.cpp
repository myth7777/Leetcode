class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    // ------------OPTIMAL APPROACH(2 POINTERS)----------------
        int n=nums.size();

        int i=0, j=1;
        while(j<n)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        return i+1;
    // //----------BRUTE FORCE------------
    //     int n = nums.size();
    //     set<int>st;

    //     for(int i=0; i<n; i++)
    //     {
    //         st.insert(nums[i]);
    //     }
    //     int k = st.size();

    //     int idx=0;
    //     for(auto it:st)
    //     {
    //         nums[idx++] = it;
    //     }
    //     return k;
    }
};