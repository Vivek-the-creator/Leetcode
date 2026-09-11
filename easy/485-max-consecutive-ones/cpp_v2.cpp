// Pushed: 2026-09-11 03:49:59 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 50.1 MB

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi, count);
            }else{
                count = 0;
            }
        }
        return maxi;
    }
};