// Pushed: 2026-09-12 03:48:18 UTC
// Difficulty: Hard
// Runtime: 15 ms
// Memory: 24.1 MB

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        int n = s.size();
        int wordLen = words[0].size();
        int wordCount = words.size();

        int totalLen = wordLen * wordCount;

        if (totalLen > n)
            return ans;

        unordered_map<string, int> need;

        for (string word : words) {
            need[word]++;
        }
        for (int offset = 0; offset < wordLen; offset++) {

            int left = offset;
            int right = offset;

            int count = 0;

            unordered_map<string, int> have;

            while (right + wordLen <= n) {

                string word = s.substr(right, wordLen);

                right += wordLen;

                if (!need.count(word)) {

                    have.clear();
                    count = 0;
                    left = right;

                    continue;
                }

                have[word]++;
                count++;

                while (have[word] > need[word]) {

                    string leftWord = s.substr(left, wordLen);

                    have[leftWord]--;
                    left += wordLen;
                    count--;
                }
                if (count == wordCount) {

                    ans.push_back(left);

                    string leftWord = s.substr(left, wordLen);

                    have[leftWord]--;
                    left += wordLen;
                    count--;
                }
            }
        }

        return ans;
    }
};