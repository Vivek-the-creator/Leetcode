class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> res;
        for(int n:nums){
            if(res.size()<k || res[res.size()-k] != n){
                res.push_back(n);
            }
        }
        return res;
    }
};