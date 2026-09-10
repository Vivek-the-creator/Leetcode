class Solution {
public:
    bool isValid(string s) {
        for(int i=0; i<s.size(); i++){
            int n=s.size();
            if(s[n-1] == '(' || s[n-1] == '[' || s[n-1] == '{' || s[0] == ')' || s[0] == ']' || s[0] == '}'){
                return false;
            }
            if(s[i] == '('){
                for(int j=0; j<s.size(); j++){
                    if(s[j] == ')' && (j-i)%2 != 0){
                        return true;
                    }
                }
            }else if(s[i] == '['){
                for(int j=0; j<s.size(); j++){
                    if(s[j] == ']' && (j-i)%2 != 0){
                        return true;
                    }
                }
            }else if(s[i] == '{'){
                for(int j=0; j<s.size(); j++){
                    if(s[j] == '}' && (j-i)%2 != 0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};