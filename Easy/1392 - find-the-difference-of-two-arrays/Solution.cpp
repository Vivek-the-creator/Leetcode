class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        unordered_map<int,int>diff;
        for(int i=0; i<nums1.size(); i++){
            diff[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            diff[nums2[i]]++;
        }
        vector<vector<int>>ans(2);
        for(int i=0; i<nums1.size(); i++){
            if(diff[nums1[i]] == 1){
                ans[0].push_back(nums1[i]);
            }
        }for(int i=0; i<nums2.size(); i++){
            if(diff[nums2[i]] == 1){
                ans[1].push_back(nums2[i]);
            }
        }
        return ans;
    }
};