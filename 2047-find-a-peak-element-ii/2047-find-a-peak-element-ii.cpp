class Solution {
public:
    int maxIndex(vector<vector<int>>& mat, int n , int midCol)
    {
        int maxIndex = -1;
        int maxValue = -1;
        for(int i=0; i<n; i++)
        {
            if(mat[i][midCol]>maxValue)
            {
                maxValue = mat[i][midCol];
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        int low = 0;
        int high = cols-1;
        int mid; 

        while(low<=high)
        {
            mid = low + (high-low)/2;
            int maxRowIndex = maxIndex(mat, rows, mid);

            int left = mid-1>=0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid+1<cols ? mat[maxRowIndex][mid+1] : -1;

            if(mat[maxRowIndex][mid]>left && mat[maxRowIndex][mid]>right)
                return {maxRowIndex, mid};
            
            else if(mat[maxRowIndex][mid]<left)
                high = mid-1;

            else
                low = mid+1;
        }

        return {-1,-1};
    }
};