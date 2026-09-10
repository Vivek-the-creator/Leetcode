class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        vector<int>hash(n,0);
        for(int i=0; i<n; i++){
            long long fci = items[i][0];
            for(int j=0; j<n; j++){
                if(i==j) continue;
                long long fcj = items[j][0];
                if(fcj % fci == 0){
                    hash[i]++;
                }
            }
        }
        long long ans = 0;
        int total = 1 << n;
        for(int m=1; m<total; m++){
            long long cost = 0;
            long long c = 0;
            int minprice = INT_MAX;
            for(int i=0; i<n; i++){
                if(m & (1 << i)){
                    cost += items[i][1];
                    c += 1+hash[i];
                    minprice = min(minprice, items[i][1]);
                }
            }
            if(cost > budget) continue;
            long long x = (budget - cost)/minprice;
            ans = max(ans, c+x);
        }
        return ans;
    }
};