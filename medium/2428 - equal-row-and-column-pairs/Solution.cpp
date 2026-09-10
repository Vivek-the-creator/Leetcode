class Solution {
public:
    bool isEqual(vector<int>& rows, vector<int>& cols){

        for(int i=0; i<rows.size(); i++){
            if(rows[i] != cols[i]){
                return false;
            }
        }
        return true;
        
    }
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();    
        vector<vector<int>> rows;
        vector<vector<int>> cols;
        int count = 0;
        for (int i = 0; i < n; i++) {
            rows.push_back(grid[i]);     
            vector<int> temp_col;
            for (int j = 0; j < n; j++) {
                temp_col.push_back(grid[j][i]); 
            }
            cols.push_back(temp_col);
        }
        for(int i=0; i<rows.size(); i++){
            for(int j=0; j<cols.size(); j++){
                if(isEqual(rows[i], cols[j])){
                    count++;
                }
            }
        }
        return count;
    }
};