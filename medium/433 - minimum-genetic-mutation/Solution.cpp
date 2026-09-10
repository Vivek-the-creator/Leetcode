class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        int cnt=0;
        for(int i=0; i<startGene.size(); i++){
            if(startGene[i] != endGene[i]){
                cnt++;
            }
        }
        return cnt;
    }
};