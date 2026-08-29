class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;

        for (const auto& interval : intervals) {

            // Case 1: interval comes before newInterval
            if (interval[1] < newInterval[0]) {
                result.push_back(interval);
            }

            // Case 2: interval comes after newInterval
            else if (interval[0] > newInterval[1]) {
                result.push_back(newInterval);
                newInterval = interval;

            }

            // Case 3: intervals overlap
            else {
                newInterval[0] = min(newInterval[0], interval[0]);
                newInterval[1] = max(newInterval[1], interval[1]);
            }
        }

        // Add the final newInterval
        result.push_back(newInterval);

        return result;
    }
};