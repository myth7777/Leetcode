class Solution {
    public boolean isValidSudoku(char[][] board) {
        int row = board.length;
        int col = board[0].length;

        boolean status = true;
        
        Set<Character> mpp = new HashSet<>(); 

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j] == '.') continue;

                if(mpp.contains(board[i][j]))
                    return false;
                
                else
                    mpp.add(board[i][j]);
            }
            mpp.clear();
        }
        
        mpp.clear();

        for(int j=0; j<col; j++)
        {
            for(int i=0; i<row; i++)
            {
                if(board[i][j] == '.') continue;

                if(mpp.contains(board[i][j]))
                    return false;
                
                else
                    mpp.add(board[i][j]);
            }
            mpp.clear();
        }
        mpp.clear();

        int sr,sc;
        int er,ec;

        for(sr=0; sr<row; sr = sr+=3)
        {
            er = sr+2;
            for(sc=0; sc<col; sc+=3)
            {
                ec = sc+2;
                for(int i=sr; i<=er; i++)
                {
                    for(int j=sc; j<=ec; j++)
                    {
                        if(board[i][j] == '.') continue;
                        if(mpp.contains(board[i][j]))
                            return false;
                        else
                            mpp.add(board[i][j]);
                    }
                }
                mpp.clear(); 
            }
        }
        return true;
    }
}