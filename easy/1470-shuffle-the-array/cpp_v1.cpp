// Pushed: 2026-09-11 03:47:42 UTC
// Difficulty: Easy
// Runtime: 4 ms
// Memory: 13.6 MB

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};