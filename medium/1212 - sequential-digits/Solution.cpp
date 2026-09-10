class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int n = 123456789;
        vector<int>ans;
        string s = to_string(n);
        for (int len = 1; len <= s.size(); len++) {
            for (int i = 0; i + len <= s.size(); i++) {
                int val = stoi(s.substr(i, len));
                if (val >= low && val <= high)
                    ans.push_back(val);
            }
        }
        return ans;
    }
};