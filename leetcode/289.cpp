#include "std_includes.h"

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int sizerow = board.size();
        int sizecol = board[0].size();
        int p = 0;
        vector<int> buffer = {};

        for (int i = 0; i < sizerow; ++i) {
            for (int j = 0; j < sizecol; ++j) {
                // Cell
                int neighbors = (board[i][j]) ? -1 : 0;
                for (int row = i-1; row <= i+1; ++row) {
                    for (int col = j-1; col <= j+1; ++col) {
                        if (row >= 0 && row < sizerow && col >= 0 && col < sizecol) {
                            neighbors += (board[row][col]) ? 1 : 0;
                        }
                    }
                }
                if (neighbors < 2 || neighbors > 3) { buffer.push_back(0); }
                else if (neighbors == 3 && !board[i][j]) { buffer.push_back(1); }
                else { buffer.push_back(board[i][j]); }
            }
        }

        for (int i = 0; i < sizerow; ++i) {
            for (int j = 0; j < sizecol; ++j) {
                board[i][j] = buffer[p];
                ++p;        
            }
        }
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.51MB | Beats 62.86%
*/