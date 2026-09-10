class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int r=0;
        int cnt = 0;
        int maxi = 0;
        while(r < nums.size()){
            if(nums[r] == 0){
                cnt++;
            }
            while(cnt>1){
                if(nums[l] == 0){
                    cnt--;
                }
                l++;
            }
            maxi = max(maxi, r-l);
            r++;
        }
        return maxi;
    }
};