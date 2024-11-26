class Solution {
    boolean validBox(char[][] board, int sr, int sc, int er, int ec )
    {
        Set<Character> boxSet = new HashSet<>();
        for(int i=sr; i<=er; i++)
        {
            for(int j=sc; j<=ec; j++)
            {
                if(board[i][j] == '.') continue;
                if(boxSet.contains(board[i][j]))
                    return false;
                else
                    boxSet.add(board[i][j]);
            }
        }
        return true;
    }
    public boolean isValidSudoku(char[][] board) {
        int row = board.length;
        int col = board[0].length;
        
        // Set<Character> mpp = new HashSet<>();
        
        // Row validation 
        for(int i=0; i<row; i++)
        {
            Set<Character> rowSet = new HashSet<>();
            for(int j=0; j<col; j++)
            {
                if(board[i][j] == '.') continue;

                if(rowSet.contains(board[i][j]))
                    return false;
                
                else
                    rowSet.add(board[i][j]);
            }
        }
        
        
        // Column validation
        for(int j=0; j<col; j++)
        {
            Set<Character> colSet = new HashSet<>();
            for(int i=0; i<row; i++)
            {
                if(board[i][j] == '.') continue;

                if(colSet.contains(board[i][j]))
                    return false;
                
                else
                    colSet.add(board[i][j]);
            }
        }

        // Box validation
        int sr,sc;
        int er,ec;

        for(sr=0; sr<row; sr+=3)
        {
            er = sr+2;
            for(sc=0; sc<col; sc+=3)
            {
                ec = sc+2;
                if(!validBox(board, sr,sc,er,ec))
                    return false;
            }
        }
        return true;
    }
}