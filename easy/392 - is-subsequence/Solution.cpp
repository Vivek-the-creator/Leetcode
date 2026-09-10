class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()){
            return false;
        }
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(t[j] == s[i]){
                i++;
                j++;
            }else{
                j++;
            }

        }
        return i==s.size();
    }
};