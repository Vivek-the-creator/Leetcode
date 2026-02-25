class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        for(int i=0; i<numRows; i++){
            vector<int>row;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    row.push_back(1);
                } else{
                    row.push_back(matrix[i-1][j-1] + matrix[i-1][j]);
                }
            }
            matrix.push_back(row);
        }
        return matrix;
    }
};