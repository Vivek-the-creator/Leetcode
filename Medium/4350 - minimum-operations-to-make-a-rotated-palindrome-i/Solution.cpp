class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        int ans = INT_MAX;

        for (int k = 0; k < n; k++) {
            int c = k;

            for (int i = 0; i < n / 2; i++) {
                char a = s[(i + k) % n];
                char b = s[(n - 1 - i + k) % n];

                int d = (b - a + 26) % 26;

                c += min(d, 26 - d);
            }

            ans = min(ans, c);
        }

        return ans;
    }
};