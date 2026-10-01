// Pushed: 2026-10-01 15:22:51 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.8 MB

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if(st.empty())
                    return false;

                char top = st.top();
                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};