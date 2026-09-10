class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>arr;
        arr.push_back(0);
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            arr.push_back(sum);
        }
        for(int i=0; i<nums.size(); i++){
            if(arr[i] == (sum - arr[i + 1])){
                return i;
            }
        }

        return -1;
    }
};