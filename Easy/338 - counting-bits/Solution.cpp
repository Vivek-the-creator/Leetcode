class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0; i <= n; i++){
            int num = i;     
            int count = 0;   
            // while(num){
            //     num &= (num - 1);
            //     count++;
            // }

            for(int j = 0; j < 32; j++)
            {
                if((num & (1 << j)) != 0) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};