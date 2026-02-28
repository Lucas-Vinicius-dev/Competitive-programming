#include "std_includes.h"

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int res = 0;
        int target = 0;
        int size = nums.size();

        for (int i = 0; i < size; ++i) {
            target |= nums[i];
        }
        
        for (int mask = 1; mask < (1 << size); ++mask) {
            int result = 0;
            for (int i = 0; i < size; ++i) {
                if (mask & (1 << i)) {
                    result |= nums[i];      
                }
            }
            if (result == target) {
                res++;
            }
        }
        
        return res;
    }
};

/* Average Performance
    Runtime: 67ms | Beats 33.17%
    Memory: 10.65MB | Beats 63.68%
*/