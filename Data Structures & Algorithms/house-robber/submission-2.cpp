class Solution {
public:
    int dp[101];

    int solve( vector<int>& nums , int n ){
        if( n<0 ){
            return 0 ;
        }

        if( n==0 ){
            return nums[0];
        }

        if( dp[n] != -1){
            return dp[n];
        }

        return dp[n] = max( solve(nums , n-1) , nums[n] + solve(nums , n-2));
    }
    int rob(vector<int>& nums) {
        fill( dp , dp+101 , -1);
        int n = nums.size()-1;
        return solve(nums,n);
    }

};
