class Solution {
public:
    int majorityElement(vector<int>& nums) {
            sort(nums.begin() , nums.end());
    int n = nums.size();
    int ans = nums[n/2];
    return ans ;
    }
};