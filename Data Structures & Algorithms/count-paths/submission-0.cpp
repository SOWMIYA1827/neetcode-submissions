class Solution {
public:
    int dp[101][101];

    int solve( int m , int n ){
        if( m<0 || n<0){
            return 0 ;
        }

        if( m==0 || n==0){
            return 1 ;
        }

        if( dp[m][n] != -1){
            return dp[m][n];
        }

        return dp[m][n] = solve( m , n-1) + solve( m-1 , n );
    }

    int uniquePaths(int m, int n) {
        fill(&dp[0][0] , &dp[0][0] + sizeof(dp)/sizeof(int) , -1);
        return solve(m-1,n-1);
    }
};
