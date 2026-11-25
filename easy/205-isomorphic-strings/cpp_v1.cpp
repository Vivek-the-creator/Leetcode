// Pushed: 2026-11-25 13:55:23 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 9.4 MB

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int>arr1(256, 0);
        vector<int>arr2(256, 0);
        for(int i=0; i<s.size(); i++){
            if(arr1[s[i]] != arr2[t[i]]){
                return false;
            }
            arr1[s[i]] = i+1;
            arr2[t[i]] = i+1;
        }
        return true;
    }
};