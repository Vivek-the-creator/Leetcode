class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int sum = 0;
        int cnt = 0;
        for(int i=0; i<stones.size(); i++){
            sum += stones[i];
            cnt++;
            
        }
        if(sum%3 == 0 && cnt%2 == 0){
            return true;
        }
        return false;
    }
    
};