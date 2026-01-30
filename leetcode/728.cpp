#include "std_includes.h"

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i < right+1; i++) {
            int num = i;
            bool is_divisible = true;
            while (num) {
                if (num % 10 == 0) {
                    is_divisible = false;
                    break;
                }
                if (i % (num % 10)) {
                    is_divisible = false;
                    break;
                } else {
                    num /= 10;
                }
            }
            if (is_divisible) {
                res.push_back(i);
            }
        }
        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.21MB | Beats 28.19%
*/