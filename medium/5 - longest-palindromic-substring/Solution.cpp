class Solution {
public:
    string longestPalindrome(string s) {
    
        int n = s.size();
        int maxi = 0;
        string ans;
        for (int i = 0; i < n; i++) {

            for (int len = maxi+1; len <= n - i; len++) {
                if(s[i] == s[i + len - 1]){
                    string substring = s.substr(i, len);
                    string rev = substring;
                    reverse(substring.begin(), substring.end());
                    if(substring == rev){
                        int cnt = substring.size();
                        if(cnt > maxi){
                            maxi = cnt;
                            ans = substring;
                        }
                    }
                }
                
            }
        }
        return ans;
    }
};