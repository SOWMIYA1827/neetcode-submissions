class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size() ;

        vector<int> ans;

        for(int i=0 ; i<matrix.size() ; i++){
            for(int j=0 ; j<matrix[0].size() ; j++){
                ans.push_back(matrix[i][j]);
            }
        }

        int l=0 , r=ans.size()-1 ;

        while( l<=r ){
            int mid = l + (r-l)/2 ;

            if(ans[mid] == target){
                return true;
            }
            else if ( ans[mid] > target){
                r = mid - 1;
            }

            else{
                l = mid + 1;
            }
        }

        return false;

    }
};
