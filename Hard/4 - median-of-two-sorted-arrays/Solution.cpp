class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
        
        for(int i=0; i<nums1.size(); i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(), nums.end());
        int n=nums.size();
        double ans;
        if(n % 2 != 0){

            ans = nums[n/2.0];
        }else{
            
            ans = (nums[n/2.0 - 1] + nums[n/2.0]) / 2.0;
        }
        return ans;
    }
};