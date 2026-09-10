class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        int cnt = 0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i] == nums[j]){
                cnt++;
                j++;
            }else{
                while(cnt>2){
                    nums.erase(nums.begin() + (j-1));
                    j--;
                    cnt--;
                }
                i = j;
                cnt = 0;
            }
        }
        while (cnt > 2) {
            nums.erase(nums.begin() + (j - 1));
            j--;
            cnt--;
        }
        return nums.size();
    }
};