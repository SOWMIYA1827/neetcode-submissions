class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimal = INT_MAX ;
        for ( int i=0 ; i<nums.size() ; i++){
            int sum = 0 ;

            for ( int j=i ; j<nums.size() ; j++){
                  sum = sum + nums[j] ;

                  if ( sum >= target){
                      minimal = min (minimal , j-i+1 );
                      break;
                  }
            }
        }
        return (minimal == INT_MAX) ? 0 : minimal ;
    }
};