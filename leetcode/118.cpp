#include "std_includes.h"

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {{1}, {1,1}};
        if (numRows == 1) {
            return {{1}};
        }

        vector<int> current = {};

        for (int i = 2; i < numRows; i++) {
            current.push_back(1);
            for (int j = 0; j < i-1; j++) {
                current.push_back(res[i-1][j] + res[i-1][j+1]);
            }
            current.push_back(1);
            res.push_back(current);
            current = {};
        }

        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.54MB | Beats 89.11%
*/