class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        for(int i=n-1; i>=0; i--){
            if(s[i]%2 != 0){
                n--;
            }else{
                break;
            }
        }
        return s.substr(0,n);
    }
};