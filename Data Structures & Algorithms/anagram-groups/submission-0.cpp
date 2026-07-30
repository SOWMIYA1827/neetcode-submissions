class Solution {
public:

    
bool isanagram( string s1 , string s2){
    if (s1.length() != s2.length()) {
        return false;
    }
    
    sort (s1.begin() , s1.end());
    sort (s2.begin() , s2.end());
    
    return s1 == s2 ;
} 

    vector<vector<string>> groupAnagrams(vector<string>& value) {
        vector<vector< string>> result ;
    vector <bool> visited (value.size() , false);
    
    for ( int i=0 ;i<value.size() ; i++){
        
        if (visited[i]) continue;
        
        vector<string> group;
        group.push_back(value[i]);
        visited[i] = true;
        
        for(int j=i+1 ; j<value.size() ; j++){
            if (!visited[j] && isanagram(value[i] , value[j])){
                group.push_back(value[j]);
                visited[j] = true;
            }
        }
        result.push_back(group);
    }
   return result;
    }
};