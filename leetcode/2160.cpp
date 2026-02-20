#include "std_includes.h"

class Solution {
public:
    int minimumSum(int num) {
        int res = 0;
        string str = to_string(num);
        pair<char, int> min1 = {58, -1};
        pair<char, int> min2 = {58, -1};

        for (int i = 0; i < str.length(); ++i) {
            if ( str[i] < min1.first) { min2 = min1; min1.first = str[i]; min1.second = i; }
            else if ( str[i] < min2.first) { min2.first = str[i]; min2.second = i; }
        }

        bool first = true;
        string temp = "";

        for (int i = 0; i < str.length(); ++i) {
            pair<char, int> selected = (first) ? min1 : min2;
            pair<char, int> other = (first) ? min2 : min1;

            if (selected.second != i && other.second != i) { 
                temp += selected.first;
                temp += str[i];
                res += stoi(temp);
                temp = "";
                first = false;
            }
        }

        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 7.98MB | Beats 52.54%
*/