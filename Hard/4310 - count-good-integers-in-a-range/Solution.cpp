class Solution {
public:
    long long a;
    string s;
    long long dp[17][11][2][2];
    bool visible[17][11][2][2];
    long long dfs(int p, int prev, int t, int st){
        if(p == (int)s.size()){
            return st ? 1 : 0;
        }
        if(visible[p][prev][t][st]){
            return dp[p][prev][t][st];
        }
        visible[p][prev][t][st] = true;
        long long r = 0;
        int l = t?(s[p]-'0'):9;
        for(int i=0; i<=l; i++){
            int nt = t && (i == l);
            if(!st){
                if(i==0){
                    r += dfs(p+1, 10, nt, 0);
                }else{
                    r += dfs(p+1, i, nt, 1);
                }
            }else{
                if(abs(i-prev) <= a){
                    r += dfs(p+1, i, nt, 1);
                }
            }
        }
        return dp[p][prev][t][st] = r;
    }
    long long Good(long long x, int k){
        if(x <= 0){
            return 0;
        }
        a = k;
        s = to_string(x);
        memset(visible, 0, sizeof(visible));
        return dfs(0, 10, 1, 0);
    }
    long long goodIntegers(long long l, long long r, int k) {
        return Good(r, k) - Good(l-1, k);
    }
};