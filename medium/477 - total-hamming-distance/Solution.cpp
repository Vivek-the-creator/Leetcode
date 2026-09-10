class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int count=0;
        int i=0;
        int j=1;
        int x;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                x = nums[i]^nums[j];
                while(x){            
                    x &= x-1;
                    count++;
                }

            }
            
        
        }
        return count;
    }
};