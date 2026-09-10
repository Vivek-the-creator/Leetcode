class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        vector<int> dif(n+1, 0);
        for(int i=0; i<n; i++){
            if(lights[i] > 0){
                int maxi = max(0, i-lights[i]);
                int mini = min(n-1, i+lights[i]);
                dif[maxi]++;
                if(mini+1 < n){
                    dif[mini+1]--;
                }
            }
        }
        vector <int> vis(n, 0);
        int curr = 0;
        for(int i=0; i<n; i++){
            curr += dif[i];
            vis[i] = (curr>0);
        }
        int ans = 0;
        int i = 0;
        while(i < n){
            if(vis[i]){
                i++;
                continue;
            }
            int j=i;
            while(j<n && !vis[j]){
                j++;
            }
            int length = j-i;
            ans += (length + 2)/3;
            i = j;
        }
        return ans;
    }
};