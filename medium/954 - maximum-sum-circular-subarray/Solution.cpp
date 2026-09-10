class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int currmax = 0;
        int maxi = INT_MIN;
        int currmin = 0;
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            total += nums[i];

            currmax = max(nums[i], currmax+nums[i]);
            maxi = max(maxi, currmax);

            currmin = min(nums[i], currmin+nums[i]);
            mini = min(mini, currmin);
        }
        if(maxi < 0){
            return maxi;
        }
        return max(maxi, total-mini);
    }
};