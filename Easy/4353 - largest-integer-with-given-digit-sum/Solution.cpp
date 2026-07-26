class Solution {
public:
    int largestInteger(int n, int s) {
        if (s == 0){
            return 0;
        }
        if (s > 9 * n){
            return -1;
        } 

        int num = 0;

        for (int i = 0; i < n; i++) {
            int dig = min(9, s);
            num = num * 10 + dig;
            s -= dig;
        }

        return num;
    }
};