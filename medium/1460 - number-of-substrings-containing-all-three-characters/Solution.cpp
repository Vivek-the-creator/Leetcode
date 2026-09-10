class Solution {
public:
    
    int numberOfSubstrings(string s) {
        int hash[3] = {0};
        int l = 0;
        int cnt = 0;

        for(int r = 0; r < s.size(); r++){
            hash[s[r] - 'a']++;

            while(hash[0] > 0 && hash[1] > 0 && hash[2] > 0){
                cnt += s.size() - r;
                hash[s[l] - 'a']--;
                l++;
            }
        }

        return cnt;
    }
};