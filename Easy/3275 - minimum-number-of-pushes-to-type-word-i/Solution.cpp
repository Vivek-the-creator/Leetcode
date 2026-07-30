class Solution {
public:
    int minimumPushes(string word) {
        int l = word.size();
        int b = l/8;
        int r = l%8;
        return (b * (b+1)*4) + (l%8)*(b+1);
    }
};