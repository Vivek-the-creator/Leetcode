class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() < 3){
            return -1;
        }
        
        sort(nums.begin(), nums.end());
        int ans1 = nums[0]*nums[1]*nums[nums.size()-1];
        int ans2 = nums[nums.size()-3]*nums[nums.size()-1]*nums[nums.size()-2];

        return max(ans1, ans2);
    }
};