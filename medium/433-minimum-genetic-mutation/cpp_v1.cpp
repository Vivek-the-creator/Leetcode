// Pushed: 2026-10-31 18:11:19 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 8.7 MB

class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {

        unordered_set<string> st(bank.begin(), bank.end());

        queue<string> q;
        q.push(startGene);

        int steps = 0;

        string genes = "ACGT";

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                string curr = q.front();
                q.pop();

                if (curr == endGene)
                    return steps;

                for (int i = 0; i < 8; i++) {

                    char original = curr[i];

                    for (char ch : genes) {

                        curr[i] = ch;

                        if (st.find(curr) != st.end()) {

                            q.push(curr);
                            st.erase(curr);

                        }
                    }

                    curr[i] = original;
                }
            }

            steps++;
        }

        return -1;
    }
};