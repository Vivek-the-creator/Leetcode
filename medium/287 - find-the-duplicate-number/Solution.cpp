class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k;
        int j=1;
        int i=0;
        sort(nums.begin(), nums.end());
        while(j<=nums.size()){
            if(nums[i] == nums[j]){
                k = nums[j];
                break;
            }
            j++;
            i++;
        }
        return k;
    }
};