class Solution {
public:

    bool calculate(vector<int>& nums , int i , vector<vector<int>>& dp , int target){

        if( target == 0 ){
            return true ;
        }
        if( i >= nums.size() || target < 0){
            return false ;
        }

        if( dp[i][target] != -1){
            return dp[i][target];
        }

        bool pick = calculate( nums , i+1 , dp , target-nums[i]);
        bool notpick = calculate(nums , i+1 , dp , target);

        return dp[i][target] = (pick || notpick) ;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size() ;

        int sum = accumulate(nums.begin() , nums.end() , 0);

        if( sum %2 != 0){
            return false ;
        }

       int target = sum/2 ;
        vector<vector<int>> dp(n , vector<int>(target+1 , -1));

        return calculate( nums , 0  , dp , target );
    }
};
