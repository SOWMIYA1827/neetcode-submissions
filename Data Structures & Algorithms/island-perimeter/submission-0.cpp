class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        int ones = 0 , neigh = 0 ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if( grid[i][j] == 1){
                    ones++;
               
                 if( i+1 < n && grid[i+1][j] == 1){
                    neigh++;
                 }

                 if( j+1 <m && grid[i][j+1] == 1){
                    neigh++;
                 }
                }
            }
        }

        return ones*4 - neigh*2 ;
    }
};