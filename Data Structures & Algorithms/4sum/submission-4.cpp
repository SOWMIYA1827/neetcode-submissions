class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for ( int i=0 ; i<nums.size() ; i++){
            for ( int j=i+1 ; j<nums.size() ; j++){
                for (int k=j+1 ; k<nums.size() ; k++){
                    for(int x=k+1 ; x<nums.size() ; x++){
                    long long sum = (long long )nums[i] + nums[j] + nums[k] + nums[x];
                    if ( sum == target){
                        ans.insert({nums[i] , nums[j] , nums[k] ,  nums[x]});
                    }
                }
                }
            }
        }
        return vector<vector<int>>(ans.begin() , ans.end());
    }
};