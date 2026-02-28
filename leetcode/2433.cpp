#include "std_includes.h"

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res = {pref[0]};
        int size = pref.size();

        for (int i = 1; i < size; ++i) {
            res.push_back(pref[i-1] ^ pref[i]);
        }
        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 83.70MB | Beats 18.52%
*/