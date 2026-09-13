// Pushed: 2026-09-13 18:54:54 UTC
// Difficulty: Easy
// Runtime: 11 ms
// Memory: 31 MB

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int>hash;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        vector<int>three;
        for(auto i:hash){
            if(i.second == 3){
                three.push_back(i.first);
            }
        }
        int count = 0;
        int k=0;
        while(k < three.size()){
            vector<int> points;
            for(int i=0; i<nums.size(); i++){
                
                if(nums[i] == three[k]){
                    points.push_back(i);
                }
            }
            if(points[1] - points[0] == points[2] - points[1]){
                count++;
            }
            k++;
        }
        return count;
    }
};