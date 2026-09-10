class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        long long time = 0;
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for(int i=1; i<intervals.size(); i++){
            int cs = intervals[i][0];
            int ce = intervals[i][1];
            if(cs <= end){
                end = max(end, ce);
            }else{
                time += (end-start+1);
                start=cs;
                end=ce;
            }
        }
        
        time+=(end-start+1);
        long long b = (brightness+2)/3;
        return 1LL*time*b;
    }
};