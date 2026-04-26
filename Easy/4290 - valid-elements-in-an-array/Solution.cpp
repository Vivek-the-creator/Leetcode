class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size() ;
        vector<bool> valid(n, false);
        valid[0] = true;
        valid[n-1] = true;
        int leftMax = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]>leftMax){
                valid[i]=true;
            }
            leftMax = max(leftMax, nums[i]);
        }
        int rightMax = nums[n-1];
        for(int i=n-2; i>=0; i--){
            if(nums[i]>rightMax){
                valid[i]=true;
            }
            rightMax = max(rightMax, nums[i]);
        }
        vector<int> result;
        for(int i=0; i<n; i++){
            if(valid[i]){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};