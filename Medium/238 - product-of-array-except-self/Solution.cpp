class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> prefix;
        prefix.push_back(1);
        int mul1 = 1;
        for(int i=0; i<nums.size(); i++){
            mul1 *= nums[i];
            prefix.push_back(mul1);
        }
        prefix.push_back(1);
        vector<int>suffix;
        suffix.push_back(1);
        int mul2 = 1;
        for(int i = nums.size()-1; i>=0; i--){
            mul2 *= nums[i];
            suffix.push_back(mul2);
        }
        suffix.push_back(1);
        vector<int>ans;
        for(int i=1; i<=nums.size(); i++){
            int answer = prefix[i-1] * suffix[nums.size()-i];
            ans.push_back(answer);

        }
        return ans;
    }
};