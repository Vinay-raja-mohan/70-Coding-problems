class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& locations) {
        int pointCount = locations.size();
        int timeRequired = 0;
        
        for (int i = 1; i < pointCount; i++) {
            timeRequired += max(abs(locations[i][0] - locations[i - 1][0]),
                                abs(locations[i][1] - locations[i - 1][1]));
        }
        
        return timeRequired;
    }
};

