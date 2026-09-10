class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans = 0;
        int drow[] = {-1,0,0,1};
        int dcol[] = {0,1,-1,0};
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int size = q.size();
            for(int j=0; j<size; j++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i=0; i<4; i++){
                    int nrow = row+drow[i];
                    int ncol = col+dcol[i];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
                        grid[nrow][ncol] = 2;
                        q.push({nrow, ncol});
                    }
                }
            }
            ans++;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return ans == 0 ? 0 : ans-1;
    }
};