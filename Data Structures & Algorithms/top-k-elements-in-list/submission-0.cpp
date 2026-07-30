class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ans ;
        for (int num : nums){
            ans[num]++ ;
        }

        vector<pair<int,int>> result;
        for(const auto& p : ans){
            result.push_back({p.second , p.first});
        }

        sort(result.rbegin() , result.rend());

        vector<int> final;
        for ( int i=0 ; i<k ; i++){
            final.push_back(result[i].second);
        }
        return final;
    }
};
