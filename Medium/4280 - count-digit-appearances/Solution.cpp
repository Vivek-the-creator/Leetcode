class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        int temp=0;
        int d=0;
        for(int i=0; i<nums.size(); i++){
            temp = nums[i];
            while(temp>0){
                d=temp%10;
                if(d==digit){
                    ans++;
                }
                temp=temp/10;
            }
        }
        return ans;
    }
};