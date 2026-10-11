// Pushed: 2026-10-11 17:33:45 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 40.1 MB

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(n%i == 0){
                ans += (nums[i-1]*nums[i-1]);
            }
        }
        ans += (nums[n-1]*nums[n-1]);
        return ans;
    }
};