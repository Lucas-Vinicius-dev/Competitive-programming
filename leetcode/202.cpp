#include "std_includes.h"

class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> viewed = {};

        string str_n = to_string(n);

        while (true) {
            int res = 0;
            
            for (int i = 0; i < str_n.length(); ++i) {
                res += (str_n[i] - '0') * (str_n[i] - '0');
            }

            if (res == 1) {
                return true;
            }

            if (viewed.find(res) == viewed.end()) {
                viewed.insert(res);
            } else {
                return false;
            }
            str_n = to_string(res);
        }

    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 9.54MB | Beats 6.18%
*/