class Solution {
public:
    long long getSum(vector<int>& nums) {
        int n = nums.size();

        vector<long long> p(n+1, 0);

        for(int i=0; i<n; i++){
            p[i+1] = p[i] + nums[i];
        }


        vector<int> o(n);

        int l=0;
        int r=-1;

        for(int i=0; i<n; i++){
            int k = (i>r) ? 1 : min(o[l+r-i], r-i+1);

            while(i-k >= 0 && i+k < n && nums[i-k] == nums[i+k]){
                k++;
            }

            o[i] = k--;

            if(i+k > r){
                l = i-k;
                r = i+k;
            }
        }


        vector<int> e(n);

        l=0;
        r=-1;

        for(int i=0; i<n; i++){
            int k = (i>r) ? 0 : min(e[l+r-i+1], r-i+1);

            while(i-k-1 >= 0 && i+k < n && nums[i-k-1] == nums[i+k]){
                k++;
            }

            e[i] = k--;

            if(i+k > r){
                l = i-k-1;
                r = i+k;
            }
        }


        long long sum = 0;


        for(int i=0; i<n; i++){
            int s = o[i];

            int l = i-s+1;
            int r = i+s-1;

            sum = max(sum, p[r+1]-p[l]);
        }


        for(int i=0; i<n; i++){
            int s = e[i];

            if(s == 0){
                continue;
            }

            int l = i-s;
            int r = i+s-1;

            sum = max(sum, p[r+1]-p[l]);
        }

        return sum;
    }
};