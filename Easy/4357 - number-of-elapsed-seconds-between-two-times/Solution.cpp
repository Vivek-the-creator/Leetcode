class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sec;
        int ssec = stoi(startTime.substr(0,2)) * 3600 + stoi(startTime.substr(3,2)) * 60 + stoi(startTime.substr(6,2));

        int esec = stoi(endTime.substr(0,2)) * 3600 + stoi(endTime.substr(3,2)) * 60 + stoi(endTime.substr(6,2));
        sec = esec-ssec;
        return sec;
    }
};