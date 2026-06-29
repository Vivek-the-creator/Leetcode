class Solution {
public:
    bool isSubstring(string s1, string s2){
        if(s2.size() > s1.size()){
            return false;
        }
        for(int i = 0; i <= s1.size() - s2.size(); i++) {
            if(s1.substr(i, s2.size()) == s2) {
                return true;
            }
        }
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(int i=0; i<patterns.size(); i++){
            if(isSubstring(word, patterns[i])){
                cnt++;
            }
        }
        return cnt;
    }
};