class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }if(n==2){
            return true;
        }for(int i=2; i*i <= n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int diff(int n){
        int p = n+1;
        while(!(isprime(p))){
            p++;
        }
        return p-n;
    }
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0){
                if(!(isprime(nums[i]))){
                    count+=diff(nums[i]);
                }
            }else{
                if(isprime(nums[i])){
                    int val = nums[i];
                    while(isprime(val)){
                        count++;
                        val++;
                    }
                }
            }
        }
        return count;
    }
};