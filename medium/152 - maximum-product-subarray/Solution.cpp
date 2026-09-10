class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int i=0; 
        int j=1;
        int maxi = nums[i];
        int ans = 0;
        while(i < nums.size() && j < nums.size()){
            
            if(maxi*nums[j] >= maxi){
                maxi = max(maxi, maxi*nums[j]);
                ans = max(maxi, ans);
                j++;
                
            } else{
                ans = max(ans, maxi);
                i = j;
                j++;
                maxi = nums[i];
            }
        }
        return ans;
    }
};