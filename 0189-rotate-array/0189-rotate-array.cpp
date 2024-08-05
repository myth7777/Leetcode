class Solution {
public:
    void reverse(vector<int>&arr, int start, int end)
    {
        while(start<=end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        k = k % n;

        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);

    }
};