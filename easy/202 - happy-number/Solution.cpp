class Solution {
public:
    int Happy(int n){
        int sum=0;
        while(n>0){
            int x=n%10;
            sum = sum + (x*x);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n<10){
            n = n*n;
        }
       while(n>=5){
        int num = Happy(n);
        n = num;
       }
       if(n==1){
        return true;
       }
       return false;
    }
};