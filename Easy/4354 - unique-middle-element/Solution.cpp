class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int mid = nums.size()/2;
        if(mpp[nums[mid]] == 1){
            return true;
        }
        return false;
    }
};