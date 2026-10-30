// Pushed: 2026-10-30 05:41:12 UTC
// Difficulty: Medium
// Runtime: 4 ms
// Memory: 9.7 MB


class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int i = 1; i < n; i++) {
            string ans = "";

            int j = 0;

            while (j < s.size()) {
                int count = 1;

                while (j + 1 < s.size() && s[j] == s[j + 1]) {
                    count++;
                    j++;
                }

                ans += to_string(count);
                ans += s[j];

                j++;
            }

            s = ans;
        }

        return s;
    }
};
