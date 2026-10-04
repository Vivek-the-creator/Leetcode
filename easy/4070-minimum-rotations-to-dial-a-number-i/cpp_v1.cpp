// Pushed: 2026-10-04 17:19:40 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.7 MB

class Solution {
public:
    int minRotations(string s) {
        int sum = 0;
        int n1 = 0;
        for(int i=0; i<s.size(); i++){
            int n2 = s[i]-'0';
            int diff = abs(n1-n2);
            sum += min(diff, 10-diff);
            n1 = n2;
        }
        return sum;
    }
};