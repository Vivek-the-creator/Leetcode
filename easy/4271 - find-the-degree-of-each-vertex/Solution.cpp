class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int temp = 0;
        vector<int>arr;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                if(matrix[i][j] == 1){
                    temp++;
                }
            }
            arr.push_back(temp);
            temp = 0;
        }
        return arr;
    }
};