class Solution {
public:
    int maximumSwap(int num) {
        vector<int>nums;
        int temp = num;
        while(temp>0){
            nums.push_back(temp%10);
            temp=temp/10;
        }
        reverse(nums.begin(), nums.end());
        int l=0;
        for(int i=0; i<nums.size(); i++){
            if(l < nums[i]){
                l = nums[i];
            }
        }
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                swap(nums[i], nums[j]);
                long long x=0;
                for(int i = 0; i < nums.size(); i++) {
                    x = x * 10 + nums[i];
                    if(x > num){
                        num = x;
                    }
                }
                swap(nums[j], nums[i]);
            }
        }
        
        
        return num;

    }
};