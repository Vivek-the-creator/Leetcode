class Solution {
public:
    int maximumLengthSubstring(string s) {
        int hash[26] = {0};
        int maxi = 0;
        int start = 0;
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
            while(hash[s[i]-'a'] > 2){
                hash[s[start] - 'a']--;
                start++;
            }
            maxi = max(maxi, i-start+1);
        }
        return maxi;
    }
};