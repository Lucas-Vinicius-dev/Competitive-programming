#include "std_includes.h"

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> v;
        int p = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (v.find(s[i]) == v.end()) {
                v.insert(s[i]);
                ++p;
            }
        }
        return p;
    }
};

/* Average Performance
    Runtime: 27ms | Beats 59.63%
    Memory: 25.28MB | Beats 48.60%
*/