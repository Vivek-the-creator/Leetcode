class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        for(int i=citations.size(); i>=0; i--){
            int count=0;
            for(int j : citations){
                if(j >= i){
                    count++;
                }
            }
            if(count>=i){
                return i;
            }
        }
        return -1;
    }
};