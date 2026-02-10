#include "std_includes.h"

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> viewed;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (viewed.find(nums[i]) != viewed.end()) {
                return true;
            } else {
                viewed.insert(nums[i]);
            }
        }
        return false;
    }
};

/* Average Performance
    Runtime: 51ms | Beats 48.77%
    Memory: 90.78MB | Beats 58.61%
*/