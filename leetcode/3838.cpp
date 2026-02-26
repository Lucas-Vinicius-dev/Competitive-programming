#include "std_includes.h"

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string data = "abcdefghijklmnopqrstuvwxyz";
        string res = "";
        int size = words.size();

        for (int i = 0; i < size; ++i) {
            int weight = 0;
            for (int j = 0; j < words[i].length(); ++j) {
                weight += weights[data.find(words[i][j])];
            }
            res += data[25-(weight%26)];
        }
        return res;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 43.70MB | Beats 28.12%
*/