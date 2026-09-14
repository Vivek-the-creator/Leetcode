// Pushed: 2026-09-14 14:15:21 UTC
// Difficulty: Easy
// Runtime: 11 ms
// Memory: 12.4 MB

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int k=j;
                    bool check = false;
                    while(k < nums2.size()){
                        if(nums2[k] > nums2[j]){
                            ans.push_back(nums2[k]);
                            check = true;
                            break;
                        }
                        k++;
                    }
                    if(!check){
                        ans.push_back(-1);
                    }    
                }
            }
        }
        return ans;
    }
};