class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result ;

        for(int i=0 ; i<arr.size() ; i++){
            int num = -1 ;

            for(int j=i+1 ; j<arr.size() ; j++){
                if( arr[j] > num ){
                    num = arr[j];
                }
            }

            result.push_back(num);
        }

        return result ;
    }
};