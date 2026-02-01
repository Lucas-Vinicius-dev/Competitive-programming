#include "std_includes.h"

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int res[2] = {51,51};
        for (int i = 1; i < size(nums); i++) {
            if (nums[i] < res[0]) {
                res[1] = res[0];
                res[0] = nums[i];
            } else if (nums[i] < res[1]) {
                res[1] = nums[i];
            }
        }

        return nums[0] + res[0] + res[1];
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 30.46MB | Beats 74.87%
*/