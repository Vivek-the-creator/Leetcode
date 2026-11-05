// Pushed: 2026-11-05 17:02:27 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 16.5 MB

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool valid = true;

            for (int j = 0; j < arr2.size(); j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans++;
            }
        }

        return ans;
    }
};