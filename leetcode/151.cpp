#include "std_includes.h"

class Solution {
public:
    string reverseWords(string s) {
        vector<string> split;
        int start = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) {
            if (s[i] != ' ') {
                if (i > 0 && s[i-1] == ' ') {
                    start = i;
                }

                if (i < size-1 && s[i+1] == ' ') {
                    split.push_back(s.substr(start, i+1 - start));
                }
            }
        }
        if (s[size-1] != ' ') {
            split.push_back(s.substr(start, size - start));
        }

        string res = "";
        for (int i = split.size()-1; i >= 0; i--) {
            string space = (i == 0) ? "" : " ";
            res += split[i] + space;
        }

        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 10.91MB | Beats 35.89%
*/