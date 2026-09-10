class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n);

        long long curLen = 0;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                curLen++;
            } else if (ch == '*') {
                if (curLen > 0) curLen--;
            } else if (ch == '#') {
                curLen *= 2;
            } else if (ch == '%') {

            }

            len[i] = curLen;
        }

        if (k >= curLen) return '.';

        for (int i = n - 1; i >= 0; i--) {
            long long prevLen = (i == 0 ? 0 : len[i - 1]);
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                if (k == prevLen) return ch;
            }
            else if (ch == '#') {
                if (k >= prevLen) k -= prevLen;
            }
            else if (ch == '%') {
                k = prevLen - 1 - k;
            }
        }

        return '.';
    }
};