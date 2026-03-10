class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maximum = 0;

        for(int i = 0; i < words.size(); i++){
            for(int j = i + 1; j < words.size(); j++){

                bool common = false;

                for(char c : words[i]){
                    if(words[j].find(c) != string::npos){
                        common = true;
                        break;
                    }
                }

                if(!common){
                    int size = words[i].size() * words[j].size();
                    maximum = max(maximum, size);
                }
            }
        }

        return maximum;
    }
};