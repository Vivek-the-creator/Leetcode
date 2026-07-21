class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (freq[nums[right]] > 0)
                return true;

            freq[nums[right]]++;

            if (right - left >= k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
            }
        }

        return false;
    }
};