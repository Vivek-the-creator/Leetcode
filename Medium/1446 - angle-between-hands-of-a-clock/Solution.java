class Solution {
    public double angleClock(int hour, int minutes) {
        double diff = (hour * 1.0) + ((minutes * 1.0) / 60);
        diff -= (minutes * 1.0) / 5;

        diff = diff > 0 ? diff : -diff;
        diff *= 30;

        if(diff > 180) return 360 - diff;

        return diff;
    }
}