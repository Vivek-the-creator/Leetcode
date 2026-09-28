// Pushed: 2026-09-28 12:58:24 UTC
// Difficulty: Easy
// Runtime: 4 ms
// Memory: 11.9 MB

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>rn;
        unordered_map<char, int>m;
        for(auto ch : ransomNote){
            rn[ch]++;
        }
        for(auto ch : magazine){
            m[ch]++;
        }
        for(auto ch : ransomNote){
            if(rn[ch] > m[ch]){
                return false;
            }
        }
        return true;
    }
};