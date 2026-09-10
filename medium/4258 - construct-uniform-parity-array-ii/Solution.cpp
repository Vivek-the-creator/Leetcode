class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=0;
        int even=0;
        long minimum = nums1[0];
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2 == 0){
                even++;
            }else{
                odd++;
            }
            if(nums1[i] < minimum){
                minimum = nums1[i];
            }
        }
        if(odd == nums1.size()){
            return true;
        }
        if(even == nums1.size()){
            return true;
        }
        if(minimum % 2 == 0){
            return false;
        }else{
            return true;
        }
    }
};