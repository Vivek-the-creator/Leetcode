class Solution {
public:
    bool miniCost(vector<int>& nums1, vector<int>& nums2){
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i] != nums2[i]){
               return false;
            }
        }
        return true;
    }
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() != nums2.size()){
            return -1;
        }
        
        if(miniCost(nums1, nums2)){
            return 0;
        }
        int count = 0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                swap(nums1[i], nums2[j]);
                count++;
                vector<int>a = nums1;
                vector<int>b = nums2;
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
                if(miniCost(a, b)){
                    return count;
                }
            }
            
        }
        return -1;
    }
};