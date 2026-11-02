// Pushed: 2026-11-02 13:30:22 UTC
// Difficulty: Medium
// Runtime: 1 ms
// Memory: 15.8 MB

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int mid = nums[nums.size() / 2];
        long long moves = 0;
        
        for (int num : nums) {
            moves += abs(num - mid);
        }
        
        return moves;
    }
};