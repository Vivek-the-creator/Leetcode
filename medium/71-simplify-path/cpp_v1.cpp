// Pushed: 2026-10-28 17:18:31 UTC
// Difficulty: Medium
// Runtime: 3 ms
// Memory: 10.9 MB

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string dir;
        stringstream ss(path);

        while (getline(ss, dir, '/')) {
            if (dir.empty() || dir == ".") {
                continue;
            }
            
            if (dir == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } 
            else {
                st.push_back(dir);
            }
        }

        string result = "";
        for (string &s : st) {
            result += "/" + s;
        }

        return result.empty() ? "/" : result;
    }
};