class Solution {
public:
    int findNthDigit(int n) {
        if (n < 10)
            return n;

        int cnt = 0;

        for (int i = 1;; i++) {
            string s = to_string(i);

            for (char c : s) {
                cnt++;
                if (cnt == n)
                    return c - '0';
            }
        }

        return -1;
    }
};