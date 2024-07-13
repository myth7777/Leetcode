class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size(); 
        vector<int> arr;
        for(int i=0; i<n1; i++)
        {
            arr.push_back(nums1[i]);
        }
        for(int j=0; j<n2;j++)
        {
            arr.push_back(nums2[j]);
        }

        sort(arr.begin(), arr.end());

        int n3 = arr.size();
        double median;

        if(n3%2 == 0) //n3 is even
        {
            int mid = n3/2;
            int midEle1=arr[mid];
            int midEle2=arr[mid-1];
            
            median = (midEle1 + midEle2)/2.0;
        }
        else
        {
            median = arr[n3/2];
        }
        return median;
    }
};