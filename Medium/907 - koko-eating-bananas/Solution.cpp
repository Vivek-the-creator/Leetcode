class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int low = 1;
        int high = piles.back();
        long long cnt = 0;
        while(low <= high){
            int mid = (low+high)/2;
            for(int i=0; i<piles.size(); i++){
                int n = piles[i]/mid;
                if(piles[i]%mid != 0){
                    n+=1;
                }
                cnt+=n;
            }
            if(cnt <= h){
                high = mid-1;
            }else if(cnt > h){
                low = mid+1;
            }
            cnt = 0;
        }
        return low;
    }
};