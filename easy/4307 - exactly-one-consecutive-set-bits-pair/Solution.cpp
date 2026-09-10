class Solution {
public:
    bool consecutiveSetBits(int n) {
        vector<int>num;
        while(n!=0){
            int temp = n%2;
            num.push_back(temp);
            n=n/2;
        }
        int prev=2;
        int count=0;
        for(int i=0; i<num.size(); i++){
            int curr = num[i];
            if(curr == 1 & prev == 1){
                count++;
            }
            prev = curr;
        }
        if(count==1){
            return true;
        }
        return false;
    }
};