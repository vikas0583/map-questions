class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            map<char, int> freq;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    freq[board[i][j]]++;
                    if (freq[board[i][j]] > 1) return false;
                }
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            map<char, int> freq;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    freq[board[j][i]]++;
                    if (freq[board[j][i]] > 1) return false;
                }
            }
        }

        // Check 3x3 sub-boxes
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                map<char, int> freq;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char num = board[3 * boxRow + i][3 * boxCol + j];
                        if (num != '.') {
                            freq[num]++;
                            if (freq[num] > 1) return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
