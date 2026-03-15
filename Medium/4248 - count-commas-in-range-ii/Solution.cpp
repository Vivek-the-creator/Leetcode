class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        long long count = 0;
        long long i=1000;
        while(i<=n){
            int num = floor(log10(i)) + 1;
            int cnt = (num-1)/3;
            long long next = pow(10, num);
            long long end = min(next-1, n);
            count += (end-i+1) * cnt;
            i = end+1;
        }
        return count;
    }
};