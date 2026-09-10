class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.length();
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i]) {
                continue;
            }
            if (s1[i] == '0' && s2[i] == '1') {
                cnt += 1;
            } else if (s1[i] == '1' && s2[i] == '0') {
                if (i < n - 1) {
                    if (s1[i + 1] == '1') {
                        cnt += 1;
                    } else {
                        cnt += 2;
                    }
                    s1[i + 1] = '0';
                } else {
                    if (n == 1) {
                        return -1;
                    }
                    cnt += 2;
                }
            }
        }
        
        return cnt;
    }
};