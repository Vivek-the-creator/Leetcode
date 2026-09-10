class Solution {
public:

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<pair<int,int>> temp;
        for(int i=0; i<spells.size(); i++){
            temp.push_back({spells[i], i});
        }
        vector<int>ans(spells.size());
        sort(temp.begin(), temp.end());
        sort(potions.begin(), potions.end());

        int j = potions.size()-1;
        int cnt = 0;

        for(int i=0; i<spells.size(); i++){
            while(j >= 0 && (long long)temp[i].first * potions[j] >= success){
                cnt++;
                j--;
            }
            ans[temp[i].second] = cnt;
        }
        return ans;
    }
};