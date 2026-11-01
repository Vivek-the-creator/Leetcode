// Pushed: 2026-11-01 18:05:27 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 31.8 MB

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = nums[0];
        int moves = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                moves += i * (mini - nums[i]);
                mini = nums[i];
            } else {
                moves += (nums[i] - mini);
            }
        }
        return moves;
    }
};