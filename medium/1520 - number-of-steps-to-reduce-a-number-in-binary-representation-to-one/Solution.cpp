class Solution {
public:
    int numSteps(string s) {
        unsigned long long num = stoull(s, nullptr, 2); 
        cout << num;
        int count=0;
        while(num != 1){
            if(num%2 == 0){
                num = num/2;
            } else{
                num = num+1;
            }
            count++;
        }
        return count;
    }
};