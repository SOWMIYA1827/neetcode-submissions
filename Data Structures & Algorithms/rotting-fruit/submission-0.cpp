class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        if( grid.empty()) return 0 ;

        int n = grid.size();
        int m = grid[0].size();

        int minute = 0 ;
        int freshfruit = 0 ;
        queue<pair<int,int>> q ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if( grid[i][j] == 2){
                    q.push({i,j});
                }
                else if( grid[i][j] == 1){
                    freshfruit++;
                }
            }
        }

        if( freshfruit == 0) return 0 ;

        vector<pair<int,int>> directions = {{0,-1} , {1,0} , {-1,0} , {0,1}};

        while(!q.empty() && freshfruit > 0){
            int qsize = q.size();
            minute++;

            for(int i=0 ; i<qsize ; i++){
                auto [r,c] = q.front();
                q.pop();

                for(auto [dr , dc] : directions){
                    int newr = r + dr ;
                    int newc = c + dc ;

                    if(newr >= 0 && newr <n && newc >= 0 && newc < m && grid[newr][newc] == 1 ){
                        grid[newr][newc] = 2;
                        q.push({newr , newc});
                        freshfruit--;
                    }
                }
            }
        }

        return (freshfruit == 0 ) ? minute : -1 ;

    }
};
