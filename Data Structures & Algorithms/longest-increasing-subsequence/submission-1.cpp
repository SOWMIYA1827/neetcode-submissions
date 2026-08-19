class Solution {
public:
    int LIS(vector<int>& nums , int i , int last ,  vector<vector<int>>& dp){
        if( i == nums.size()){
            return 0 ;
        }

        if( dp[i][last+1] != -1){
            return dp[i][last+1];
        }

        int np = LIS( nums , i+1 , last , dp);
        int p = 0 ;
        if( last == -1 || nums[i] > nums[last]){
            p = 1 + LIS( nums , i+1 , i , dp);
        }

        return dp[i][last+1] = max( p , np); 
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int last = -1  ;
        vector<vector<int>> dp(n , vector<int>(n+1,-1));
        int ans = LIS( nums , 0 , last , dp );
        return ans ;
    }

};
