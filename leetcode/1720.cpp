#include "std_includes.h"

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res = {first};
        for (int i = 0; i < encoded.size(); ++i) {
            res.push_back(encoded[i] ^ res[res.size()-1]);
        }
        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 30.39MB | Beats 49.83%
*/