// Pushed: 2026-10-14 15:37:57 UTC
// Difficulty: Medium
// Runtime: 74 ms
// Memory: 61.9 MB


class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
            string ans = "";
        while (num--) {
            int digit = min(9, sum);
            ans += char('0' + digit);
            sum -= digit;
        }
        return ans;
    }
};