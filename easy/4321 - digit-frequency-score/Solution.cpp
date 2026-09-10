class Solution {
public:
    int digitFrequencyScore(int n) {
        int maxi;
        int m = n;
        while(m!=0){
            int temp = m%10;
            if(temp > maxi){
                maxi = temp;
            }
            m = m/10;
        }
        vector <int> hash(maxi+1, 0);
        int d = n;
        while(d!=0){
            int temp = d%10;
            hash[temp] += 1;
            d = d/10;
        }
        int ans = 0;
        for(int i=0; i<hash.size(); i++){
            if(hash[i] != 0){
                ans += i*hash[i];
            }
        }
        return ans;
    }
};