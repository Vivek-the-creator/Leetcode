class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long c1 = 0;
        long long c2 = 0;
        long long s = 0;
        const int MOD = 1e9 + 7;
        for(int num : nums){
            if(num < a){
                s = s + c1 + c2;
            } else if(num <= b){
                s += c2;
                c1++;
            } else{
                c2++;
            }
        }
        return s%MOD;
    }
};