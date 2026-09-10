class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans = nums;

        vector<int> maxi(n);
        maxi[0] = ans[0];
        for(int i = 1; i < n; i++)
            maxi[i] = max(maxi[i-1], ans[i]);

        vector<int> mini(n);
        mini[n-1] = ans[n-1];
        for(int i = n-2; i >= 0; i--)
            mini[i] = min(mini[i+1], ans[i]);

        for(int i = 0; i < n; i++){
            int diff = maxi[i] - mini[i];
            if(diff <= k)
                return i;
        }
        return -1;
    }
};