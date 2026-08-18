class Solution {
public:
    int cyclicrob(vector<int>& nums , int l , int h ){
       int oldest = 0 , older = 0 , current = 0 ;

       for(int i=l ; i<=h ; i++){
        current = max( older , nums[i] + oldest );
        oldest = older ;
        older = current ;
       }

       return current ;
    }

    int rob(vector<int>& nums) {
        int n = nums.size() ;

        if( n==1 ){
            return nums[0];
        }

        int ans1 = cyclicrob(nums , 0 , n-2);
        int ans2 = cyclicrob(nums , 1 , n-1);

        return max(ans1, ans2);
    }
};
