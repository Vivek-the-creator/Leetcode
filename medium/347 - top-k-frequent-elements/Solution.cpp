class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> hash(maxi - mini + 1, 0);

        
        for(int num : nums) {
            hash[num - mini]++;
        }

        vector<int> freq;

        for(int f : hash) {
            if(f > 0)
                freq.push_back(f);
        }

        sort(freq.begin(), freq.end());

        int klf = freq[freq.size() - k];

        vector<int> ans;

        for(int i = 0; i < hash.size(); i++) {
            if(hash[i] > klf) {
                ans.push_back(i + mini);
            }
        }

        for(int i = 0; i < hash.size() && ans.size() < k; i++) {
            if(hash[i] == klf) {
                ans.push_back(i + mini);
            }
        }

        return ans;
    }
};