class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2, -1);
        int l=0;
        int r=nums.size()-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                l = mid;
                while(l>=0 && nums[l] == target){
                    l--;
                }
                ans[0] = l+1;
                r = mid;
                while(r<nums.size() && nums[r] == target){
                    r++;
                }
                ans[1] = r-1;
                break;
            }
            else if(nums[mid] > target){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};