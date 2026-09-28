// Pushed: 2026-09-28 17:25:41 UTC
// Difficulty: Medium
// Runtime: 2 ms
// Memory: 8.3 MB

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>factor;
        for(int i=1; i<=n/2; i++){
            if(n%i == 0){
                factor.push_back(i);
            }
        }
        factor.push_back(n);
        if(factor.size() < k){
            return -1;
        }
        return factor[k-1];
    }
};