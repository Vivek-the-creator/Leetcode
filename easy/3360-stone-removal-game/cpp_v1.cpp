// Pushed: 2026-11-26 03:55:35 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 7.7 MB

class Solution {
public:
    bool canAliceWin(int n) {
        bool alice = false;
        int s = 10;
        while(n>=s){
            n -= s;
            s--;
            alice = !alice;
        }
        return alice;

    }
};