class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        
        vector<int>mx;
        int maxi = nums[0];
        mx.push_back(maxi);
        for(int i=1; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
            mx.push_back(maxi);
        }
        vector<int>prefixGCD;
        for(int i=0; i<nums.size(); i++){
            int g = gcd(nums[i], mx[i]);
            prefixGCD.push_back(g);
        }
        sort(prefixGCD.begin(), prefixGCD.end());
        int i=0;
        int j=prefixGCD.size()-1;
        long long sum = 0;
        while(i<j){
            int k = gcd(prefixGCD[i], prefixGCD[j]);
            sum+=k;
            i++;
            j--;
        }
        return sum;
    }
};