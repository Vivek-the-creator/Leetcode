// Pushed: 2026-10-27 16:16:43 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 11 MB

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));
        for (int j = 0; j < n; j++) {
            grid[0][j] = '.';
        }
        for (int i = 0; i < m; i++) {
            grid[i][n - 1] = '.';
        }
        return grid;
    }
};