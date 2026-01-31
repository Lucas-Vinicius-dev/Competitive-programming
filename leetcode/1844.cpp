class Solution {
public:
    string replaceDigits(string s) {
        int sz = size(s);

        if (sz == 1) { 
            return s; 
        }

        for (int i = 1; i < sz; i+=2) {
            s[i] = s[i-1] + s[i] - 48;
        }

        return s;
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 8.29MB | Beats 47.27%
*/