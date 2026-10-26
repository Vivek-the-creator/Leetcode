// Pushed: 2026-10-26 13:00:16 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.4 MB

class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return 0;
        }
        return 1 + (num-1)%9;
    }
};