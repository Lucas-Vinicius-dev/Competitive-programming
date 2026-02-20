#include "std_includes.h"

class Solution {
public:
    int mirrorDistance(int n) {
        if (n < 10) {
            return 0;
        }

        string str = to_string(n);
        string res = "";

        for (int i = str.length()-1; i >= 0; --i) {
            res += str[i];
        }
        return abs(stoi(res) - n);
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.42MB | Beats 12.64%
*/