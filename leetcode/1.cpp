#include "std_includes.h"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> memory;

        for (int i = 0; i < size(nums); i++) {
            int found = target - nums[i];
            if (memory.find(nums[i]) == memory.end()) {
                memory[found] = i;
            } else {
                return {memory[nums[i]], i};
            }
        }
        return {};
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 14.83MB | Beats 36.34%
*/