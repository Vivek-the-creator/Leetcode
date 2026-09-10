class Solution {
public:
    int minRefuelStops(int target, int startFuel,
                       vector<vector<int>>& stations) {

        priority_queue<long long> pq;

        // Treat destination as a station
        stations.push_back({target, 0});

        long long fuel = startFuel;
        long long prev = 0;
        int stops = 0;

        for (auto& station : stations) {

            long long position = station[0];
            long long stationFuel = station[1];

            // Fuel required to reach this station
            fuel -= (position - prev);

            // If we cannot reach it, refuel from
            // the largest previously passed stations
            while (fuel < 0 && !pq.empty()) {
                fuel += pq.top();
                pq.pop();
                stops++;
            }

            // Still cannot reach this station
            if (fuel < 0) {
                return -1;
            }

            // We have reached the station,
            // so its fuel is now available
            pq.push(stationFuel);

            prev = position;
        }

        return stops;
    }
};