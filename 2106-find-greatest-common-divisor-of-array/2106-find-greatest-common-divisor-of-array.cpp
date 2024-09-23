class Solution {
public:
    int gcd(int mini, int maxi){
        int ans = (maxi==0) ? mini : gcd(maxi, mini%maxi);
        return ans;
    }
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        return gcd(mini, maxi);
    }
};