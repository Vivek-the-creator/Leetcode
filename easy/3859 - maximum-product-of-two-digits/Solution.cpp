class Solution {
public:
    int maxProduct(int n) {
        int temp = n;
        int maxi = 0;
        int hash[10] = {0};
        while(temp > 0){
            hash[temp % 10]++;
            temp/=10;
        }
        temp = n;
        while(temp > 0){
            if(temp%10 > maxi){
                maxi = temp%10;
            }
            temp/=10;
        }
        if(hash[maxi] > 1){
            return maxi*maxi;
        }
        int temp1 = n;
        int maxi1 = 0;
        while(temp1 > 0){
            if(temp1%10 > maxi1 && temp1%10 < maxi){
                maxi1 = temp1%10;
            }
            temp1/=10;
        }
        return maxi*maxi1;
    }
};