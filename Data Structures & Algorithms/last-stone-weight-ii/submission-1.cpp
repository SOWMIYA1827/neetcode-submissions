class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        int sum = accumulate( stones.begin() , stones.end() , 0);
        int target = sum/2 ;

        int n = stones.size();

        vector<bool> dp(target+1 , false);
        dp[0] = true ;

        for( int stone : stones ){
            for(int j=target ; j>=stone ; j--){
                if( dp[ j - stone] == true ){
                    dp[j] = true ;
                }
            }
        }

        int s1 = 0 ;
        for( int i=target ; i>=0 ; i--){
            if( dp[i] == true){
                s1 = i ;
                break ;
            }
        }

        return sum - 2*s1 ;
    }
};