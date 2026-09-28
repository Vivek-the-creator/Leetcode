// Pushed: 2026-09-28 05:36:12 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.3 MB

class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int res = 0;
        for(char ch: s)
        {
            if(ch == '(') c++;
            else if(ch == ')') c--;

            res = max(res, c);
        }

        return res;
    }
};