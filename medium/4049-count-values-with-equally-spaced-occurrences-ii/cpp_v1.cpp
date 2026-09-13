// Pushed: 2026-09-13 18:55:48 UTC
// Difficulty: Medium
// Runtime: 305 ms
// Memory: 318.8 MB

class Solution {
public:
    bool isArithmetic(vector<int>& arr){
        int diff = arr[1]-arr[0];
        for(int i=2; i<arr.size(); i++){
            if(arr[i] - arr[i-1] != diff){
                return false;
            }
        }
        return true;
    }
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>>hash;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto num:hash){
            if(num.second.size() >= 3){
                if(isArithmetic(num.second)){
                    count++;
                }
            }
            
            
        }
        return count;
    }
};