class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        int n= nums.size();

        for(int i=0; i<n; i++)
            x = x^nums[i]; //xor of same is 0 and A xor 0 is A.
        
        return x;
    }
};