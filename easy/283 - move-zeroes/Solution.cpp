class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
                j++;
            }
        }
        int n=temp.size();
        for(int i=0; i<nums.size(); i++){
            if(i < n){
                nums[i] = temp[i];
            }else{
                nums[i] = 0;
            }
        }
    }
};