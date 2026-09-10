class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> result;

        for(auto &row : matrix){
            result.insert(result.end(), row.begin(), row.end());
        }
        sort(result.begin(), result.end());
        if(k>result.size()){
            return -1;
        }
        
        return result[k-1];
    }
};