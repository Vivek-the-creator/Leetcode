class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans=1;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]==(ans*k)){
                ans++;
            }
        }
        return ans*k;
    }
};