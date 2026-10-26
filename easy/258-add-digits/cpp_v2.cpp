// Pushed: 2026-10-26 12:57:45 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 8.6 MB

class Solution {
public:
    
    int addDigits(int num) {
        int n = num;
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n = n/10;
            if(sum >= 10){
                sum = (sum+1)%10;
            }
        }
        
        return sum;
    }
};