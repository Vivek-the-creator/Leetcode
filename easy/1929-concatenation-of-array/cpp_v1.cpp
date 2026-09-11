// Pushed: 2026-09-11 03:46:05 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 17.2 MB

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};