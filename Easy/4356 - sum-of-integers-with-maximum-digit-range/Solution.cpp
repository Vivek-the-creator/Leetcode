class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> range;
        for(int i=0; i<nums.size(); i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            int num = nums[i];
            while(num > 0){
                int temp = num%10;
                
                maxi = max(maxi, temp);
                mini = min(mini, temp);
                num /= 10;
            }
            range.push_back(maxi - mini);
        }
        int maxr = 0;
        for(int i=0; i<range.size(); i++){
            maxr = max(maxr, range[i]);
        }
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(range[i] == maxr){
                sum += nums[i];
            }
        }
        return sum;
    }
};