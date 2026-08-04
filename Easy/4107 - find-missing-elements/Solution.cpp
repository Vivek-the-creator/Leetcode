class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            int temp = nums[i];
            if(nums[i+1] != temp+1){
                while(temp < nums[i+1]){
                    temp++;
                    if(temp != nums[i+1]){
                        ans.push_back(temp);
                    }
                    
                }
            }
        }
        return ans;
    }
};