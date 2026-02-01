#include "std_includes.h"

class Solution {
public:
    int totalMoney(int n) {
        int week = 0, value = 0; 
        while (n) {
            int days = (n < 7) ? n : 7;
            for (int i = 1; i <= days; i++) {
                value += i + week;
                n--;
            }
            week++;
        }
        return value;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 7.83MB | Beats 49.51%
*/