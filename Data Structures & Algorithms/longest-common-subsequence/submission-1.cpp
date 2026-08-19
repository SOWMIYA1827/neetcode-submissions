class Solution {
public:

    int lcs(string& s, string& t, int i, int j,
            vector<vector<int>>& dp) {

        if (i == s.length() || j == t.length()) {
            return 0;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (s[i] == t[j]) {
            return dp[i][j] =
                1 + lcs(s, t, i + 1, j + 1, dp);
        }

        return dp[i][j] = max(
            lcs(s, t, i + 1, j, dp),
            lcs(s, t, i, j + 1, dp)
        );
    }

    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.length();
        int m = text2.length();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return lcs(text1, text2, 0, 0, dp);
    }
};