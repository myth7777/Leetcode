class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n,m;
        m = matrix.size();
        n = matrix[0].size();
        
        vector<int>min_row;
        vector<int>max_col;

        for(int i=0; i<m; i++)
        {
            int mini=INT_MAX;
            for(int j=0; j<n; j++)
            {
                if(mini>matrix[i][j])
                    mini = matrix[i][j];
            }
            min_row.push_back(mini);
        }
        
        for(int j=0; j<n; j++)
        {
            int maxi=INT_MIN;
            for(int i=0; i<m; i++)
            {
                if(maxi<matrix[i][j])
                    maxi = matrix[i][j];
            }
            max_col.push_back(maxi);
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((matrix[i][j] == min_row[i]) && (matrix[i][j] == max_col[j]))
                    ans.push_back(matrix[i][j]);
            }
        }
        
        return ans;
    }
};