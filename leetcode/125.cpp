#include "std_includes.h"

class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 65 && s[i] <= 90) {
                res += s[i] + ' ';
            }
            else if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
                res += s[i];
            }
        }

        int p = res.size()-1;

        for (int i = 0; i <= p; ++i) {
            if (res[i] != res[p]) {
                return false;
            }
            p--;
        }

        return true;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 10.19MB | Beats 31.17%
*/