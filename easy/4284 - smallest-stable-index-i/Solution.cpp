class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(int j=0; j<=i; j++){
                if(nums[j] > maxi){
                    maxi = nums[j];
                }                
            }
            for(int k=i; k<nums.size(); k++){
                if(nums[k] < mini){
                    mini = nums[k];
                }
            }
            int diff = maxi - mini;
            if(diff <= k){
                return i;
            }
        }
        return -1;
    }
};