class Solution {
public:
    bool check_rows(vector<vector<char>>& board) {
        int j = 0;
        while (j < board.size()) {
            int sum = 0;
            set<char> row;
            for (int i = 0; i < 9; i++) {
                if (board[j][i] >= '1' && board[j][i] <= '9') {
                    row.insert(board[j][i]);
                    sum++;
                }
            }
            j++;
            if (sum != row.size()) {
                return false;
            }
        }
        return true;
    }

    bool check_column(vector<vector<char>>& board) {
        int j = 0;
        while (j < board[0].size()) {
            int sum = 0;
            set<char> column;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    column.insert(board[i][j]);
                    sum++;
                }
            }
            j++;
            if (sum != column.size()) {
                return false;
            }
        }
        return true;
    }

    bool check_boxes(vector<vector<char>>& board) {
        int x = 0; 
        int z = 0; 
        while (z < 9) {
            while (x < 9) {
                set<char> box;
                int sum = 0;
                for (int i = x; i < x + 3; i++) {
                    for (int j = z; j < z + 3; j++) {
                        if (board[i][j] >= '1' && board[i][j] <= '9') {
                            box.insert(board[i][j]);
                            sum++;
                        }
                    }
                }
                if (sum != box.size()) {
                    return false;
                }
                x += 3;
            }
            x = 0;
            z += 3;
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        bool r = check_rows(board);
        bool c = check_column(board);
        bool b = check_boxes(board);
        
        return (r && c && b);
    }
};