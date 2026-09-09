class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int val1 = INT_MAX;
        for(int i=start; i<nums.size(); i++){
            if(nums[i] == target){
                val1 = i;
                break;
            }
        }
        int val2 = INT_MAX;
        for(int i=start; i>=0; i--){
            if(nums[i] == target){
                val2 = i;
                break;
            }
        }
        int ans = min(abs(val1-start), abs(val2-start));
        return ans;
    }
};