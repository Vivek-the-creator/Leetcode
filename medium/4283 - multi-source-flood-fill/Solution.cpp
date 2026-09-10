class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> ans = sources;
        vector<vector<int>> grid(n, vector<int>(m,0));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        queue<tuple<int, int, int>> q;
        for(auto& src : ans){
            int r = src[0], c = src[1], clr = src[2];
            grid[r][c] = clr;
            dist[r][c] = 0;
            q.push({r, c, clr});
        }
        int dirs[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        int count = 0;
        while(!q.empty()){
            int size = q.size();
            count++;
            while(size--){
                auto[r, c, clr] = q.front();
                q.pop();
                for(auto& dir : dirs){
                    int nr = r + dir[0];
                    int nc = c + dir[1];
                    if(nr<0 || nr>=n || nc<0 || nc>=m){
                        continue;
                    }
                    if(dist[nr][nc] == count){
                        if(clr > grid[nr][nc]){
                            grid[nr][nc] = clr;
                            q.push({nr, nc, clr});
                        }
                    }
                    else if(dist[nr][nc] == INT_MAX){
                        dist[nr][nc] = count;
                        grid[nr][nc] = clr;
                        q.push({nr, nc, clr});
                    }
                }
            }
        }
        return grid;
    }
};