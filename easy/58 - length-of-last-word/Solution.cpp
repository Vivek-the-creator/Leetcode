class Solution {
public:
    int lengthOfLastWord(string s) {
        string words = "";
        vector<string>str;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                words.push_back(s[i]);
                count++;
            }else{
                if(count  != 0){
                    str.push_back(words);
                    count = 0;
                    words = "";
                }
            }
        }
        if(count!=0){
            str.push_back(words);
        }
        
       
        return str[str.size()-1].size();
    }
};