class Solution {
public:

    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {

        unordered_map<string, int> mp;

        // Store every word and its index
        for (int i = 0; i < words.size(); i++) {
            mp[words[i]] = i;
        }

        vector<vector<int>> ans;

        for (int i = 0; i < words.size(); i++) {

            string &word = words[i];
            int n = word.size();

            // Try every possible split
            for (int j = 0; j <= n; j++) {

                // LEFT = word[0 ... j-1]
                // RIGHT = word[j ... n-1]

                // Case 1:
                // LEFT is palindrome
                // Need reverse(RIGHT) before word
                if (isPalindrome(word, 0, j - 1)) {

                    string right = word.substr(j);
                    reverse(right.begin(), right.end());

                    if (mp.count(right) && mp[right] != i) {
                        ans.push_back({mp[right], i});
                    }
                }

                // Case 2:
                // RIGHT is palindrome
                // Need reverse(LEFT) after word
                if (j != n && isPalindrome(word, j, n - 1)) {

                    string left = word.substr(0, j);
                    reverse(left.begin(), left.end());

                    if (mp.count(left) && mp[left] != i) {
                        ans.push_back({i, mp[left]});
                    }
                }
            }
        }

        return ans;
    }
};