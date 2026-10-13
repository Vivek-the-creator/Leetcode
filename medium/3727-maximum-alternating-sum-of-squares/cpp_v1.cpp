// Pushed: 2026-10-13 16:38:28 UTC
// Difficulty: Medium
// Runtime: 58 ms
// Memory: 176 MB


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) > abs(b);
        });

        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long sq = 1LL * nums[i] * nums[i];

            if (i < (nums.size() + 1) / 2)
                ans += sq;
            else
                ans -= sq;
        }

        return ans;
    }
};
