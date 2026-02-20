#include "std_includes.h"

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laserbeams = 0;
        int prevDevices = 0;
        int row = bank.size();
        int col = bank[0].size();

        for (int i = 0; i < row; ++i) {
            int devices = 0;
            for (int j = 0; j < col; ++j) { 
                if (bank[i][j] == '1') { 
                    devices++; 
                    laserbeams += prevDevices;
                }
            }
            prevDevices = (devices != 0) ? devices : prevDevices ;
        }
        return laserbeams;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 27.30MB | Beats 82.11%
*/