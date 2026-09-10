class Solution {
public:
    string removeStars(string s) {
        stack<char> star;
        for(int i=0; i<s.size(); i++){
            if(s[i] != '*'){
                star.push(s[i]);
            }else{
                star.pop();
            }
        }
        string ans="";
        while(!star.empty()){
            ans.push_back(star.top());
            star.pop();
        }
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            char temp = ans[i];
            ans[i] = ans[j];
            ans[j] = temp;
            i++;
            j--;
        }
        return ans;
    }
};