#include "std_includes.h"

class Solution {
public:
    string clearDigits(string s) {
        while (true) {
            bool has_int = false;
            for (int i = 0; i < size(s); i++) {
                if (s[i] >= 48 && s[i] <= 57 && i!= 0) {
                    s.erase(i-1,2);
                    has_int = true;
                    break;
                }
            }
            if (!has_int) {
                return s;
            }
        }
        return s;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 8.30MB | Beats 96.79%
*/