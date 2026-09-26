// Pushed: 2026-09-26 04:47:56 UTC
// Difficulty: Medium
// Runtime: 131 ms
// Memory: 144.8 MB

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for(auto i:knowledge){
            mp[i[0]] = i[1];
        }
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] != '('){
                ans += s[i];
            }else{
                int j=i+1;
                while(s[j] != ')'){
                    j++;
                }
                string key = s.substr(i+1, j-i-1);
                if(mp.find(key) != mp.end()){
                    ans += mp[key];
                }else{
                    ans += '?';
                }
                i=j;
            }
        }
        return ans;
    }
};