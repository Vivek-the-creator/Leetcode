class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.size();
        vector<int> p(n);
        int o = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1') o++;
            p[i] = o;
        }
        vector<bool>ans;
        for(string &a : strs){
            int fo = 0, q = 0;
            for(char c : a){
                if(c == '1') fo++;
                else if(c == '?') q++;
            }
            int m = o-fo;
            if(m<0 || m>q){
                ans.push_back(false);
                continue;
            }
            int fp = 0;
            int qp = 0;
            bool k = true;
            for(int i=0; i<n; i++){
                if(a[i] == '1') fp++;
                else if(a[i] == '?') qp++;
                if(fp > p[i]){
                    k = false;
                    break;
                }
                int qs = q-qp;
                int maxi = max(0, m-qs);
                if(fp + maxi > p[i]){
                    k = false;
                    break;
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};