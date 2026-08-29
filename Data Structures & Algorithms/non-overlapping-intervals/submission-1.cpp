class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
          sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1]; 
        });

        vector<vector<int>> result ;

        for(const auto& interval : intervals){

          if( result.empty() || result.back()[1] <= interval[0]){
               result.push_back(interval);
          }
        }

        int n = result.size();
        int m = intervals.size();

        return m-n ;
    }
};
