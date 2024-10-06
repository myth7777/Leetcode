class Solution {
public:
    int binarySearch(int n)
    {
        int s=0;
        int e=n-1;
        long long int mid = s+(e-s)/2;
        long long int ans=-1;

        while(s<=e)
        {
            long long int squ=mid*mid;
            if(squ==n)
            {
                return mid;
            }
            else if(squ > n)
            {
                e=mid-1;
            }
            else
            {
                ans=mid;
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        return binarySearch(x);
    }
};