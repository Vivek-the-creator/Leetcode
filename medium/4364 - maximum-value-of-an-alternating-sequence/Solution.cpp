class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)
            return s;
        long long a = (n+1LL)/2;
        long long b = n/2LL;
        long long m1 = s+(a-1)*(m-1);
        long long m2 = s+m+(b-1)*(m-1);
        return max(m1, m2);
    }
};