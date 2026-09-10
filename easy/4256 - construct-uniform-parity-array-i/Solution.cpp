class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        vector<int>nums3;
        int n=nums1.size()-1;
        nums2.push_back(nums1[0]);
        nums2.push_back(nums1[0] - nums1[n]);
        nums3.push_back(nums1[0] - nums1[n]);
        nums2.push_back(nums1[n]);        
        int count=0;
        for(int i=0; i<nums2.size(); i++){
            if(nums2[i] % 2 == 0){
                count++;
            }
        }
        int cnt=0;
        for(int i=0; i<nums3.size(); i++){
            if(nums3[i] % 3 == 0){
                cnt++;
            }
        }
        if(count==0 || count==nums2.size() || cnt==0 || cnt==nums3.size()){
            return true;
        }
        return false;
    }
};