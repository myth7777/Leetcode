class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2 = 0, c3 = 0;
        for(auto x : nums){
            if(x == 0){
                c1++;
            }if(x == 1){
                c2++;
            }if(x == 2){
                c3++;
            }
        }
        int i = 0;
        int k = 0;
        while(i < c1){
            nums[k++] = 0;
            i++;

        }
        i = 0;
        while(i < c2){
            nums[k++] = 1;
            i++;
        }
        i = 0;
        while(i < c3){
            nums[k++] = 2;
            i++;
        }
    }
};