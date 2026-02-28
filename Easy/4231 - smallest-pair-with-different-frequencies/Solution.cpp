class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        if(nums.size() < 2){
            return{-1, -1};
        }
        sort(nums.begin(), nums.end());
        vector<int> val;
        vector<int> freq;
        
        int i = 0;
        while(i<nums.size()){
            int curr = nums[i];
            int count = 0;
            while(i<nums.size() && nums[i]==curr){
                count++;
                i++;
            }
            val.push_back(curr);
            freq.push_back(count);
        }
        int size = val.size();
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(freq[i] != freq[j]){
                    return {val[i], val[j]};
                }
            }
        }
        return {-1, -1};
        
    }
};