class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=1;

        for(int j=1; j<n; j++)
        {
            if(j==1 || nums[j] != nums[i-2])
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};