class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
           if(arr.empty()) return "";
      
      string prefix = "";
      
      for(int i=0 ; i<arr[0].length() ; i++){
          char cur = arr[0][i] ;
          
          for (int j=1 ; j<arr.size() ; j++){
              if( i>= arr[j].length() || arr[j][i] != cur){
                  return prefix ;
              }
          }
              
              prefix += cur ;
      }
    
  return prefix ;
    
    }
};