// Pushed: 2026-09-11 03:52:33 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 54.9 MB

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> hash(n, 0);
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]-1]++;
        }
        for(int i=0; i<n; i++){
            if(hash[i] == 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};