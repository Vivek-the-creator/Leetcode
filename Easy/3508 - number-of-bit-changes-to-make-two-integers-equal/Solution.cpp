class Solution {
public:
    int minChanges(int n, int k) {
        if(n == k){
            return 0;
        }
        int result = n^k;
        int set1 = 0;
        while(n!=0){
            n &= (n-1);
            set1++;
        }
        int set2 = 0;
        while(k!=0){
            k &= (k-1);
            set2++;
        }
        int set3 = 0;
        while(result!=0){
            result &= (result-1);
            set3++;
        }
        if((set1 - set2) == set3){
            return set3;
        }
        return -1;
        
    }
};