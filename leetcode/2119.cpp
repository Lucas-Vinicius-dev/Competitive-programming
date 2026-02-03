#include "std_includes.h"

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return !(num % 10 == 0 && num != 0);
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 7.88MB | Beats 21.06%
*/