// Pushed: 2026-09-23 04:18:41 UTC
// Difficulty: Medium
// Runtime: 4 ms
// Memory: 102.5 MB

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int i=0; i<nums.size(); i++)
            total += nums[i];
            
        int target = total - x;

        if(target < 0)
            return -1;

        if(target == 0)
            return nums.size();

        int left = 0;
        int sum = 0;
        int longest = -1;

        for(int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while(sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }

            if(sum == target) {
                longest = max(longest, right - left + 1);
            }
        }

        if(longest == -1)
            return -1;

        return nums.size() - longest;
    }
};