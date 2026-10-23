// Pushed: 2026-10-23 13:30:48 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 15 MB

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};