class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n = series1.size(), m = series2.size();
        int s1 = 0, s2 = 0, t1 = 0, t2 = 0;
        vector<vector<int>> ans;
        while(s1 < n || s2 < m){
            int t;
            if(s2 == m || (s1<n && series1[s1][0] < series2[s2][0])){
                t = series1[s1][0];
                s1++;
            } else if(s1 == n || series2[s2][0] < series1[s1][0]){
                t = series2[s2][0];
                s2++;
            } else{
                t = series1[s1][0];
                s1++;
                s2++;
            }
            while(t1 < n && series1[t1][0]<t) t1++;
            while(t2 < m && series2[t2][0]<t) t2++;
            int x;
            int y;
            if(t1 < n){
                x = series1[t1][1];
            }else{
                x = 0;
            }
            if(t2 < m){
                y = series2[t2][1];
            }else{
                y = 0;
            }
            ans.push_back({t, x+y});
        }
        return ans;
        
    }
};