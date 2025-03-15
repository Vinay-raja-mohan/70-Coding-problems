class Solution {
public:
    void exploreIsland(vector<vector<char>>& area, int x, int y, int totalRows, int totalCols) {
        if(x < 0 || x == totalRows || y < 0 || y == totalCols || area[x][y] == '0')
            return;
        area[x][y] = '0';
        exploreIsland(area, x-1, y, totalRows, totalCols);
        exploreIsland(area, x, y-1, totalRows, totalCols);
        exploreIsland(area, x+1, y, totalRows, totalCols);
        exploreIsland(area, x, y+1, totalRows, totalCols);
    }

    int countIslands(vector<vector<char>>& area) {
        int islandCounter = 0;
        int totalRows = area.size();
        int totalCols = area[0].size();
        for(int x = 0; x < totalRows; x++) {
            for(int y = 0; y < totalCols; y++) {
                if(area[x][y] == '1') {
                    islandCounter++;
                    exploreIsland(area, x, y, totalRows, totalCols);
                }
            }
        }
        return islandCounter;
    }
};
