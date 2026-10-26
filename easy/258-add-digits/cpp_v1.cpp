// Pushed: 2026-10-26 12:52:11 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 8.5 MB

class Solution {
public:
    int addnums(int n){
        int sum = 0;
        while(n != 0){
            
            int temp = n;
            temp = temp%10;
            sum+=temp;
            n = n/10;
        }
        return sum;

    }
    int addDigits(int num) {
        int n = num;
        while(n > 9){
            n = addnums(n);
        }
        return n;
    }
};