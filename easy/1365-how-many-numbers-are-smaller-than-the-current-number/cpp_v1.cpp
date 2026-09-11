// Pushed: 2026-09-11 03:53:21 UTC
// Difficulty: Easy
// Runtime: 14 ms
// Memory: 14.3 MB

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        
        for(int i=0; i<nums.size(); i++){
            int cnt = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j] < nums[i]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
            cnt = 0;
        }
        return ans;
    }
};