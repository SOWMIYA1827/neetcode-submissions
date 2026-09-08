class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if(matrix.empty() || matrix[0].empty()) return {};

        int n = matrix.size();
        int m = matrix[0].size();

        int rmin = 0 , rmax = n-1 ;
        int cmin = 0 , cmax = m-1 ;

        vector<int> result ;

        int count = 0;
        int totalelements = n*m ;
        while( count < totalelements){
            
            for(int i = cmin ; i<=cmax && count < totalelements ; i++){
                result.push_back( matrix[rmin][i]);
                count++;
            }
            rmin++;
            
            for(int i=rmin ; i<=rmax && count < totalelements  ;i++){
                result.push_back( matrix[i][cmax]);
                count++;
            }
            cmax--;

            for(int i=cmax ; i>=cmin && count < totalelements ; i--){
                result.push_back( matrix[rmax][i]);
                count++;
            }
            rmax--;

            for(int i=rmax ; i>=rmin && count < totalelements ; i--){
                result.push_back( matrix[i][cmin]);
                count++;
            }
            cmin++;
        }

        return result ; 
    }
};