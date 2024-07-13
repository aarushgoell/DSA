bool canWePlace(int i, int j, char digit, vector<vector<char>>& board) {
    // Check the row
    for (int col = 0; col < board[0].size(); col++) {
        if (board[i][col] == digit) return false;
    }

    // Check the column
    for (int row = 0; row < board.size(); row++) {
        if (board[row][j] == digit) return false;
    }

    // Check the 3x3 sub-grid
    int x = (i / 3) * 3;
    int y = (j / 3) * 3;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            if (board[a + x][b + y] == digit) return false;
    }

        }
    return true;
   }

bool placingDigits(int row, int col, vector<vector<char>>& board, int n, int m) {
    if (row == n) {
        return true;
    }

    int newRow = 0;
    int newCol = 0;
    if (col == m - 1) {
        newRow = row + 1;
        newCol = 0;
    } else {
        newRow = row;
        newCol = col + 1;
    }

    if (board[row][col] != '.') {
        return placingDigits(newRow, newCol, board, n, m);
    } else {
        for (char digit = '1'; digit <= '9'; digit++) {
            if (canWePlace(row, col, digit, board)) {
                board[row][col] = digit;
                if (placingDigits(newRow, newCol, board, n, m)) return true;
                board[row][col] = '.';
            }
        }
    }

    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();
    placingDigits(0, 0, board, n, m);
  }