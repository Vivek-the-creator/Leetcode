class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> result;
        int cnt = 1;
        for(int i=0; i<chars.size()-1; i++){
            if(chars[i] == chars[i+1]){
                cnt++;
            }
            
            else{
                if(cnt == 1){
                    result.push_back(chars[i]);
                }else{
                    result.push_back(chars[i]);
                    string s = to_string(cnt);
                    for(int j=0; j<s.size(); j++){
                        result.push_back(s[j]);
                    }
                    cnt = 1;
                }
            }
        }
        result.push_back(chars.back());

        if(cnt > 1) {
            string s = to_string(cnt);
            for(int j=0; j<s.size(); j++){
                result.push_back(s[j]);
            }
        }
        chars = result;

        return chars.size();
    }
};