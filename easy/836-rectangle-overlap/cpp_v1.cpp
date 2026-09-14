// Pushed: 2026-09-14 13:56:22 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 9.7 MB

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0]<rec2[2] && rec1[2] > rec2[0] && rec1[1] < rec2[3] && rec1[3] > rec2[1]){
            return true;
        }
        return false;
    }
};