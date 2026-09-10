class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int small=0;
        int large=0;
        for(int i=0; i<k; i++){
            small += nums[i];
            large += nums[nums.size() - i -1];
        }
        return large-small;
    }
};