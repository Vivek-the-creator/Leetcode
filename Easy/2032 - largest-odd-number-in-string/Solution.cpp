class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0){
            int n = (int)(num[i]);
            if(n%2 != 0){
                break;
            }
            num.pop_back();
            i--;
        }
        return num;
    }
};