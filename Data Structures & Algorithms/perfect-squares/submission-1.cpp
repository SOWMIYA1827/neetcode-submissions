class Solution {
public:

    int dp[10001];

    int solve(int n) {

        // Base case
        if(n == 0) {
            return 0;
        }

        // Already calculated
        if(dp[n] != -1) {
            return dp[n];
        }

        int ans = INT_MAX;

        for(int i = 1; i * i <= n; i++) {

            ans = min(ans, 1 + solve(n - i * i));
        }

        return dp[n] = ans;
    }

    int numSquares(int n) {

        fill(dp, dp + 10001, -1);

        return solve(n);
    }
};