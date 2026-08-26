class Solution {
public:
    bool hascycle(int node , const vector<vector<int>>& adj , vector<int>& visited , vector<int>& result){
          if( visited[node] == 1) return true ;
          if( visited[node] == 2) return false ;

          visited[node] = 1 ;
          for(int neighbour : adj[node]){
            if( hascycle( neighbour , adj , visited , result )){
                return true ;
            }
          }

          visited[node] = 2 ;
          result.push_back(node);
          return false ;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for(const auto& edge : prerequisites){
            adj[edge[0]].push_back(edge[1]);
        }

        vector<int> visited(numCourses , 0 );
        vector<int> result;

        for(int i=0 ; i<numCourses ; i++){
            if( visited[i] == 0){
                if( hascycle( i , adj , visited , result)){
                    return {};
                }
            }
        }

        return result ;
    }
};
