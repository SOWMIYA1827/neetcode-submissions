class Solution {
public:

    bool hascycle( int node , int parent ,const vector<vector<int>>& adj , unordered_set<int>& visited){
        visited.insert(node);

        for(int neighbour : adj[node]){

            if(neighbour == parent){
                continue ;
            }

            if(visited.count(neighbour) || hascycle( neighbour , node , adj , visited)){
                return true ;
            }

        }

            return false ;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
         if(edges.size() != n-1) return false ;

         vector<vector<int>> adj(n) ;

         unordered_set<int> visited ;

         for(const auto& node : edges){
            adj[node[0]].push_back(node[1]);
            adj[node[1]].push_back(node[0]);
         }

         if( hascycle(0 , -1 , adj , visited)) return false ;

         return visited.size() == n ;
    }
};
