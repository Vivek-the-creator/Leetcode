class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word;
        for(int i=0; i<min(word1.size(), word2.size()); i++){
            char ch1 = word1[i];
            char ch2 = word2[i];
            word.push_back(ch1);
            word.push_back(ch2);
        }
        
        if(word1.size() > word2.size()){
            for(int k=word2.size(); k<word1.size(); k++){
                char ch3 = word1[k];
                word.push_back(ch3);
            }
        }
        if(word1.size() < word2.size()){
            for(int k=word1.size(); k<word2.size(); k++){
                char ch3 = word2[k];
                word.push_back(ch3);
            }
        }
        
        return word;
    }
};