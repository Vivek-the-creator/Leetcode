class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cntx=0;
        int cnty=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == x){
                cntx++;
            } else if(s[i] == y){
                cnty++;
            }
        }
        if(cntx < 1 || cnty < 1){
            return s;
        }
        int i=0;
        int j=1;
        while(i < s.size() && j < s.size()){
            if(s[i] == x && s[j] == y && i<j){
                swap(s[i], s[j]);
            } else if(s[i] != x && i<j){
                i++;
            } else if(s[i] == x && s[j] != y){
                j++;
            } else{
                i++;
                j++;
            }
        }
        return s;
    }
};