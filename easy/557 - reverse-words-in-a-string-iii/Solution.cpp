class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string>arr;
        int i=0;
        while(i<s.size()){
            if(s[i] != ' '){
                word.push_back(s[i]);
                i++;
            }else{
                reverse(word.begin(), word.end());
                arr.push_back(word);
                word = "";
                i++;
            }
        }
        if(!word.empty()){
            reverse(word.begin(), word.end());
            arr.push_back(word);
        }
        string ans = "";
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                ans.push_back(arr[i][j]);
            }
            if(i != arr.size()-1){
                ans.push_back(' ');
            }
            
        }
        return ans;
    }
};