class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0].size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        
        int i = 0;

        while(true) {
            for(int j = 1; j < strs.size(); j++)
            {
                if(i >= strs[j].size()) return strs[0].substr(0, i);
                if(strs[j][i] != strs[0][i]) 
                {
                   return strs[0].substr(0, i);
                }
            }
            i++;
            
        }

        return strs[0].substr(0, i);
    }
};