class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();

        int l=0;
        int r=n-1;
        int length, breadth, area;
        int maxArea = INT_MIN;

        while(l<r)
        {
            length = min(height[l],height[r]);
            breadth = r-l;
            area = length*breadth;

            maxArea = max(maxArea, area);

            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxArea;


        // int diff = 0;
        // int n=height.size();
        // int mini;
        // int ans = INT_MIN;

        // for(int i=0; i<n; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         diff = j-i;
        //         mini = min(height[i], height[j]);
        //         ans = max(ans, diff*mini);
        //     }
        // }
        // return ans;
    }
};