class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int>seq;
        seq.push_back(nums[0]);
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]+1 != nums[i+1]){
                break;
            }
            seq.push_back(nums[i+1]);
        }
        int sum=0;
        for(int i=0; i<seq.size(); i++){
            sum += seq[i];
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == sum){
                sum++;
            }
        }
        return sum;
    }
};