class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        
        int sum = 0;
        int x = 1;
        while(x <= n+k){
            
            
            if(abs(n-x) <= k && (n&x) == 0){
                sum+=x;
            }
            x++;
        }
        return sum;
    }
};