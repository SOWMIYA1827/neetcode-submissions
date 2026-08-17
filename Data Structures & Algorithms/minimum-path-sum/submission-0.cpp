class Solution {
public:

    int dp[201][201];

    int solve(vector<vector<int>>& grid , int n , int m){
        if( n<0 || m<0 ){
            return INT_MAX ;
        }

        if( n==0 && m==0 ){
            return grid[0][0];
        }

        if(dp[n][m] != -1){
            return dp[n][m];
        }

        return dp[n][m] = grid[n][m] + min(solve (grid , n , m-1) ,
                                            solve( grid , n-1 , m));
    }
    int minPathSum(vector<vector<int>>& grid) {
        fill(&dp[0][0], &dp[0][0] + 201 * 201, -1);
        int n = grid.size();
        int m = grid[0].size();

        return solve(grid , n-1 , m-1);
    }
};