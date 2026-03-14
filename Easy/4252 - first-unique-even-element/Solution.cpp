class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        
        if(nums.size() == 1 && nums[0]%2 == 0){
            return nums[0];
        }
        if(nums.size() == 1 && nums[0]%2 != 0){
            return -1;
        }
        
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(i != j && nums[i] == nums[j]){
                    count++;
                }
                
            }
            if(count == 0 && nums[i]%2 ==0){
                return nums[i];
            }
        }
        
        return -1;
    }
};