class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9), cols(9), subs(9);

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char curr = board[i][j];
                if (curr == '.') continue; // Skip empty cells

                int subIndex = (i / 3) * 3 + (j / 3);

                // Check for duplicates in rows, columns, and sub-grids
                if (rows[i].count(curr) || cols[j].count(curr) || subs[subIndex].count(curr)) {
                    return false;
                }

                // Insert current value into the sets
                rows[i].insert(curr);
                cols[j].insert(curr);
                subs[subIndex].insert(curr);
            }
        }

        return true;
    }
};