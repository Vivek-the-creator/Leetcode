// Pushed: 2026-11-27 17:28:41 UTC
// Difficulty: Medium
// Runtime: 1 ms
// Memory: 9.2 MB


class Solution {
public:
    vector<string> result;

    string mapping[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string &digits, int index, string &current) {

        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for (char ch : letters) {

            current.push_back(ch);

            solve(digits, index + 1, current);

            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};

        string current = "";

        solve(digits, 0, current);

        return result;
    }
};
