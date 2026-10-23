// Pushed: 2026-10-23 13:55:58 UTC
// Difficulty: Easy
// Runtime: 162 ms
// Memory: 161.8 MB

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            vector<int> arr;

            for (int j = 0; j < nums.size(); j++) {
                if (i != j)
                    arr.push_back(nums[j]);
            }

            bool flag = true;

            for (int j = 1; j < arr.size(); j++) {
                if (arr[j] <= arr[j - 1]) {
                    flag = false;
                    break;
                }
            }

            if (flag) return true;
        }

        return false;
    }
};