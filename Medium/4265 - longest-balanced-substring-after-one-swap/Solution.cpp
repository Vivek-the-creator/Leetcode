class Solution {
public:
    int longestBalanced(string s) {
        string t = s;
        int n = s.size();
        int z = 0;
        int o = 0;
        for(char c:s){
            if(c == '0'){
                z++;
            }else{
                o++;
            }
        }
        int valid = 2*min(z, o);
        int cnt0 = 0;
        int cnt1 = 0;
        int maxi = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                cnt0++;
            }else{
                cnt1++;
            }
            maxi = max(maxi, 2*min(cnt0, cnt1));
            
        }
        return min(maxi+2, valid);
    }
};