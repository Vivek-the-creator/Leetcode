// Pushed: 2026-09-11 05:01:58 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 22 MB

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr = nums;
        sort(arr.begin(), arr.end());
        int left = (n-1)/2;
        int right = n-1;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                nums[i] = arr[left];
                left--; 
            }else{
                nums[i] = arr[right];
                right--;
            }
        }
    }
};