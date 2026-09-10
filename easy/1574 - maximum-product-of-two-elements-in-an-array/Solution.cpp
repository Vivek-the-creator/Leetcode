class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        int idx;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;

            }
        }
        int maxi1 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi1 && nums[i] <= maxi && i != idx){
                maxi1 = nums[i];
            }
        }
        return (maxi-1)*(maxi1-1);
    }
};