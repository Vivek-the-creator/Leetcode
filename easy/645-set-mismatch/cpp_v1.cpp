// Pushed: 2026-09-11 03:51:24 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 25.2 MB

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = -1, missing = -1;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0) {
                duplicate = abs(nums[i]);
            } else {
                nums[index] = -nums[index];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {duplicate, missing};
    }
};