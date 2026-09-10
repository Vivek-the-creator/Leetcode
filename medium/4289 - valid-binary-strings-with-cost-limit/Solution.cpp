class Solution {
public:
    void solve(int i, int n, int k, int c, string &curr, vector<string> &ans){
        if(c>k) return;
        if(i == n){
            ans.push_back(curr);
            return;
        }
        curr.push_back('0');
        solve(i+1, n, k, c, curr, ans);
        curr.pop_back();
        if(i == 0 || curr.back() != '1'){
            curr.push_back('1');
            solve(i+1, n, k, c, curr, ans);
            curr.pop_back();
        }
        
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<int> lavomirex = {n,k};
        vector<string>ans;
        string curr = "";
        solve(0, n, k, 0, curr, ans);
        return ans;
    }
};