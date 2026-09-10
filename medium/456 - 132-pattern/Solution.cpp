class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int i=0;
        int j=2;
        while(j<nums.size()){
            if(nums[i] < nums[i+1] && nums[j]<nums[i+1]){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};