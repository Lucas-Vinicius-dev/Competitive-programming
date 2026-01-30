class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int _size = size(nums);
        while (_size > 1) {
            for (int i = 0; i < _size-1; ++i) {
                nums[i] = (nums[i] + nums[i+1]) % 10;
            }
            _size--;
        }
        return nums[0];
    }
};