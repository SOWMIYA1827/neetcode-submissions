class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> value;
        for (int num : nums){
            value[num]++;
        }
        vector<int> final;
        int num = nums.size() / 3;
        for(const auto& p : value){
            if(p.second > num) {
              final.push_back(p.first);  
            }
        }

        return final;
    }
};