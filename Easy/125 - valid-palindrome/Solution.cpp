class Solution {
public:
    bool isPalindrome(string s) {
        string q;
        
        
        for(int i=0; i<s.size(); i++){
            if ((s[i] >= 'a' && s[i] <= 'z') || s[i] >= 'A' && s[i] <= 'Z'){
                char ch = tolower(s[i]);
                q.push_back(ch);
            }if(s[i] >= '0' && s[i] <= '9'){
                q.push_back(s[i]);
            }
            continue;
        }
        
        for(int i=0; i<q.size()/2; i++){
            if(q[i] != q[q.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};