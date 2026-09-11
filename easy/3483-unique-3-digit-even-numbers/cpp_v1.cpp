// Pushed: 2026-09-11 04:12:48 UTC
// Difficulty: Easy
// Runtime: 18 ms
// Memory: 31.2 MB

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        unordered_map <int, int>arr;
        for(int i=0; i<digits.size(); i++){
            for(int j=0; j<digits.size(); j++){
                for(int k=0; k<digits.size(); k++){
                    if(i==j || j==k || i==k){
                        continue;
                    }
                    int n = digits[i]*100 + digits[j]*10 + digits[k]*1;
                    if(n%2 == 0){
                        arr[n]++;
                    }
                }
            }
        }
        for(auto i:arr){
            if(i.second > 0 && i.first >= 100){
                count++;
            }
        }
        return count;
    }
};