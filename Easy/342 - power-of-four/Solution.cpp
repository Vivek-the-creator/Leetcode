class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        if(n <= 0 || n % 4 != 0) return false;
        return isPowerOfFour(n / 4);

        // int count = 0;
        // int x=n;
        // if(n == 1 || n == 4){
        //     return true;
        // }
        // if(n <= 0 && n%4 != 0){
        //     return false;
        // }
        // while(n!=0){
        //     n = n & (n-1);
        //     count++;
        // }
        
        // if(count == 1){
        //     while(x > 4){
        //         x = x/4;
        //         if(x == 4){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};