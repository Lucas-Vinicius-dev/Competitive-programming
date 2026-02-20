#include "std_includes.h"

class Solution {
public:
    string reversePrefix(string s, int k) {
        string sub = s.substr(0, k);
        string res = ""; 
        for (int i = sub.size()-1; i >= 0; --i) {
            res += sub[i];
        }
        res += s.substr(k, s.size());
        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.32MB | Beats 07.24%
*/