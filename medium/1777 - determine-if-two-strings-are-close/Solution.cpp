class Solution {
public:
    bool charcheck(string word1, string word2){
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        word1.erase(unique(word1.begin(), word1.end()), word1.end());
        word2.erase(unique(word2.begin(), word2.end()), word2.end());
        for(int i=0; i<word1.size(); i++){
            if(word1[i] != word2[i]){
                return false;
            }
        }
        return true;
    }
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        if(!charcheck(word1, word2)){
            return false;
        }
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        map<char,int>w1;
        map<char,int>w2;
        for(int i=0; i<word1.size(); i++){
            w1[word1[i]]++;
        }for(int i=0; i<word2.size(); i++){
            w2[word2[i]]++;
        }
        vector<int>freq1;
        vector<int>freq2;
        for(auto it : w1){
            freq1.push_back(it.second);
        }for(auto it : w2){
            freq2.push_back(it.second);
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};