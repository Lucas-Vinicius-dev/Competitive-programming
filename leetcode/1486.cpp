#include "std_includes.h"

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        for (int i = 0; i < n; ++i) {
            result ^= start + 2 * i;
        }
        return result;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 7.75MB | Beats 80.56%
*/