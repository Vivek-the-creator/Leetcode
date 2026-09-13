// Pushed: 2026-09-13 18:46:40 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 7.9 MB

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        while(n%2 == 0){
            n /= 2;
        } while(n%3 == 0){
            n/=3;
        } while(n%5 == 0){
            n/=5;
        }
        if(n==1){
            return true;
        }
        return false;
    }
};