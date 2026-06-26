class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        
        int sum=0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        avg = (double)sum / k;
        double maxi = avg;
        int i=0;
        int j = k;
        while(j<nums.size()){
            
            sum = sum-nums[i];
            sum = sum+nums[j];
            i++;
            j++;
            avg = (double)sum/k;
            maxi = max(maxi, avg);

        }
        return maxi;
    }
};