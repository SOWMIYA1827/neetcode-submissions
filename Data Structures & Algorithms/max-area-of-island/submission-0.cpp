class Solution {
public:
     int dfs(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // FIX 1: Changed 'j > m' to 'j >= m' to prevent out-of-bounds errors
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
            return 0 ;
        }
        
        // FIX 2: Mark the current cell as '0' (visited) to prevent infinite loops
        grid[i][j] = 0;
        int area = 1 ;
        
        // Explore all 4 adjacent directions
        area += dfs(i + 1, j, grid );
        area += dfs(i - 1, j, grid  );
        area += dfs(i, j + 1, grid );
        area += dfs(i, j - 1, grid  );

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
      if (grid.empty()) return 0;
        
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int ans  = dfs(i, j, grid);
                     count = max(count , ans);
                }
            }
        }
        return count;
    }
};
