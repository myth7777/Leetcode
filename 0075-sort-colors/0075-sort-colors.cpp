class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = n-1;

        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }

        // for(int i=n-1; i>=0; i--)
        // {
        //     for(int j=0; j<=i-1; j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //             swap(nums[j], nums[j+1]);
        //     }
        // }
    }
};