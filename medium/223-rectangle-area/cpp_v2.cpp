// Pushed: 2026-11-28 03:59:38 UTC
// Difficulty: Medium
// Runtime: 2 ms
// Memory: 10.4 MB

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // int a1 = (ax2 - ax1) * (ay2 - ay1);
        // int a2 = (bx2 - bx1) * (by2 - by1);
        // int ow = max(0, min(ax2, bx2)-max(ax1, bx1));
        // int oh = max(0, min(ay2, by2) - max(ay1, by1));
        // int a3 = ow * oh;
        // return a1+a2-a3; 
        return (((ax2 - ax1) * (ay2 - ay1)) + ((bx2 - bx1) * (by2 - by1))) - ((max(0, min(ax2, bx2)-max(ax1, bx1))) * (max(0, (min(ay2, by2) - max(ay1, by1)))));
    }
};