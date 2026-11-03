// Pushed: 2026-11-03 13:38:07 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 31.5 MB

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int total_moves = 0;
        
        for (int x : nums) {
            total_moves += (maxi - x);
        }
        
        return total_moves;
    }
};