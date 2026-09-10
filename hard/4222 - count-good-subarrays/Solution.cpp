class Solution {
public:
    long long countGoodSubarrays(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=i; j<n; j++){
                count |= nums[j];
                for(int k=i; k<=j; k++){
                    if(nums[k] ==count){
                        ans++;
                        break;
                    }
                }
            }
            
        }
        return ans;
    }
};