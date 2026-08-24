class Solution {
public:
    int dp[101][101];

    int solve( int m , int n , vector<vector<int>>& obstacleGrid){
        if( m<0 || n<0 ){
            return 0 ;
        }

        if( obstacleGrid[m][n] == 1){
            return dp[m][n] = 0 ;
        }

         if( m==0 && n==0){
            return 1 ;
        }

        if( dp[m][n] != -1){
            return dp[m][n];
        }

        return dp[m][n] = solve( m , n-1 , obstacleGrid) + solve( m-1 , n , obstacleGrid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        fill(&dp[0][0] , &dp[0][0] + sizeof(dp)/sizeof(int) , -1);
        return solve( m-1 , n-1 , obstacleGrid);
    }
};