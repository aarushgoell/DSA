void returnQueens(int row, vector<vector<string>>& validQueens,vector<string>& queenplacing,vector<bool>& coloumn,vector<bool>& rightdiaognal,vector<bool>& leftdiaognal,int n){

        if(row == n){
            validQueens.push_back(queenplacing);
            return;
        }


        for(int i = 0;i<n;i++){

            if(coloumn[i] == false && rightdiaognal[row+i] == false && leftdiaognal[row-i+n-1] == false){    
                string queen(n,'.');
                queen[i] = 'Q';
                queenplacing.push_back(queen);
                coloumn[i] = true;
                rightdiaognal[row+i] = true;
                leftdiaognal[row-i+n-1] = true;
                returnQueens(row + 1,validQueens,queenplacing,coloumn,rightdiaognal,leftdiaognal,n);
                queenplacing.pop_back();
                coloumn[i] = false;
                rightdiaognal[row+i] = false;
                leftdiaognal[row-i+n-1] = false;
            }
       
        }


    }




    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> validQueens;
        vector<string> queenplacing;
        vector<bool> coloumn(n,false);
        vector<bool> rightdiaognal(2*n+1,false);
        vector<bool> leftdiaognal(2*n+1,false);
        returnQueens(0,validQueens,queenplacing,coloumn,rightdiaognal,leftdiaognal,n); 

        return validQueens;
                
    }