class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if (grid[0][0] == 1) return 0;

        grid[0][0] = 1;

        for (int i = 0; i < m; ++i) {
            for (int j = (i ? 0 : 1); j < n; ++j) { 
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    continue;
                }
                if (i > 0) grid[i][j] += grid[i-1][j];
                if (j > 0) grid[i][j] += grid[i][j-1];
            }
        }

        return grid[m-1][n-1];
    }
};