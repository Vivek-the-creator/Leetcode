class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int ss = s.size();
        int ts = t.size();
        if(ss > ts){
            return false;
        }
        vector<int>l (ss);
        vector<int>r (ss);
        int j=0;
        for(int i=0; i<ss; i++){
            while(j < ts && t[j] != s[i]){
                j++;
            }
            if(j == ts){
                l[i] = ts;
            }else{
                l[i] = j;
                j++;
            }
        }
        if(l[ss-1]!=ts){
            return true;
        }
        j = ts-1;
        for(int i=ss-1; i>=0; i--){
            while(j>=0 && t[j] != s[i]){
                j--;
            }
            if(j<0){
                r[i] = -1;
            }else{
                r[i] = j;
                j--;
            }
        }
        for(int i=0; i<ss; i++){
            int m = (i==0)?-1:l[i-1];
            int n = (i==ss-1)?ts:r[i+1];
            if(m != ts && n != -1 && (n-m) >= 2){
                return true;
            }
        }
        return false;
    }
};