bool wordFtHorizontally(int row,int col,string word,vector<vector<char>>& board){
        
        if(col-1>=0 && board[row][col-1] != ' '){
            return false;
        }
        else if(col+word.length()<= board[0].size() && board[row][col+word.length()] != ' '){
            return false;
        }

        for(int jj = 0;jj<word.length();jj++){
            if(board[row][jj+col] == ' ' || board[row][jj+col] == word[jj]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;

    }

    void wordplaced(int row,int col,string word,vector<vector<char>>& board){


        for(int i = 0;i<word.length();i++){
            if(board[row][col + i] == ' '){
                   board[row][col + i] = word[i];
            }
        }


    }

     bool wordFtVertically(int row,int col,string word,vector<vector<char>>& board){
        
        if(row-1>=0 && board[row-1][col] != ' '){
            return false;
        }
        else if(row+word.length<= board.size() && board[row + word.length()][col] != ' '){
            return false;
        }

        for(int ii = 0;ii<word.length();ii++){
            if(board[row+ii][col] == ' ' || board[row + ii][col] == word[ii]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;

    }

    void wordplacedvertically(int row,int col,string word,vector<vector<char>>& board){


        for(int i = 0;i<word.length();i++){
            if(board[row+i][col] == ' '){
                   board[row+i][col] = word[i];
            }
        }


    }

    void placingwords(int index,vector<vector<char>>& board,string word){

        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j] != '#' && board[i][j] == word[0]){
                    if(wordFtHorizontally(i,j,word,board) == true){
                        wordplaced(i,j,word,board);
                    }
                    if(wordFtVertically(i,j,word,board) == true){
                        wordplacedvertically(i,j,word,board);
                    }
                }
            }
        }

    }


    bool placeWordInCrossword(vector<vector<char>>& board, string word) {

        placingwords(0,board,word);    