class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,vector<int>>> pq ;
        vector<vector<int>> result ;

        for(const auto& point : points){
            int x = point[0];
            int y = point[1];

            int dis = x*x + y*y ;
            pq.push({dis , point});

            if(pq.size() > k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result ;
    }
};
