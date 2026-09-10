class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr = (hour%12) + minutes / 60.0;
        double mins = minutes/5.0;
        double angle = abs(hr-mins)*30;
        return min(angle, 360.0-angle);
    }
};