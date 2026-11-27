// Pushed: 2026-11-27 17:32:45 UTC
// Difficulty: Medium
// Runtime: 103 ms
// Memory: 35.5 MB

class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();

        int minPrice = INT_MAX;

        for (auto &item : items) {
            minPrice = min(minPrice, item[1]);
        }

        vector<int> value(n);

        for (int i = 0; i < n; i++) {

            int freeCount = 0;

            for (int j = 0; j < n; j++) {

                if (i != j &&
                    items[j][0] % items[i][0] == 0) {

                    freeCount++;
                }
            }

            value[i] = 1 + freeCount;
        }

        vector<int> dp(budget + 1, INT_MIN);

        dp[0] = 0;

        for (int i = 0; i < n; i++) {

            int price = items[i][1];

            for (int j = budget; j >= price; j--) {

                if (dp[j - price] != INT_MIN) {

                    dp[j] = max(
                        dp[j],
                        dp[j - price] + value[i]
                    );
                }
            }
        }

        int ans = 0;

        for (int cost = 0; cost <= budget; cost++) {

            if (dp[cost] != INT_MIN) {

                int extra = (budget - cost) / minPrice;

                ans = max(ans, dp[cost] + extra);
            }
        }

        return ans;
    }
};