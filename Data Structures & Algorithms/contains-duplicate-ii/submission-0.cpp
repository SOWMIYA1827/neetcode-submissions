class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int num = nums.size();
         for(int i=0 ; i<num ; i++){
        for (int j=i+1 ; j<num ; j++){
            if(nums[i] == nums[j]){
                if ( abs(i-j) <= k){
                    return true;
                }
            }
        }
    }
    
    return false;
    }
};