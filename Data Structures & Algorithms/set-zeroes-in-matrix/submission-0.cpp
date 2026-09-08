class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<bool> inrow( n , false );
        vector<bool> incol( n , false );

        for( int i=0 ; i<n ; i++){
            for( int j=0 ; j<m ; j++){
                if( matrix[i][j] == 0){
                    inrow[i] = true ;
                    incol[j] = true ;
                }
            }
        }

        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( inrow[i] || incol[j] ){
                    matrix[i][j] = 0 ;
                }
            }
        }
    }
};