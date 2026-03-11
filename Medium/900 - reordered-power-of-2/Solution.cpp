class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int count = 0;
        
        while(n > 0){
            
            n = n & (n-1);
            count++;
        }
        if(count == 1){
            return true;
        }
        return false;
        
    }
};