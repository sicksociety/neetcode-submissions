class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char val = board[r][c];
                if (val == '.') continue;

                string rowKey = string(1, val) + " row " + to_string(r);
                string colKey = string(1, val) + " col " + to_string(c);
                string boxKey = string(1, val) + " box " + to_string(r / 3) + "-" + to_string(c / 3);

                if (!seen.insert(rowKey).second) return false;
                if (!seen.insert(colKey).second) return false;
                if (!seen.insert(boxKey).second) return false;
            }
        }
        return true;
    }
};