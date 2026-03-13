class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector <string> str;
        for(char c : s) {
            if(c == ' ') {
                if(word != "") {
                    str.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }

        
        if(word != "")
            str.push_back(word);
        

        string ans;
        for(int i=str.size()-1; i>0; i--){
            ans.append(str[i]);
            ans.append(" ");
        }
        ans.append(str[0]);
        return ans;
    }
};