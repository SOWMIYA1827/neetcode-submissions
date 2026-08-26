class Solution {
public:
    void dfs( vector<vector<char>>& grid , int r , int c ){
        int n = grid.size();
        int m = grid[0].size();

        if( r<0 || r>=n || c<0 || c>=m || grid[r][c] == '0' ){
            return ;
        }

        grid[r][c] = '0';

        dfs(grid , r , c-1 );
        dfs(grid , r , c+1 );
        dfs(grid , r+1 , c);
        dfs(grid , r-1 , c);
    }

    int numIslands(vector<vector<char>>& grid) {

        if(grid.empty()) return 0 ;
        
        int n = grid.size();
        int m = grid[0].size();

        int countisland = 0 ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if( grid[i][j] == '1' ){
                     countisland++;
                     dfs(grid , i , j);
                }
            }
        }

        return countisland ;
    }
};
