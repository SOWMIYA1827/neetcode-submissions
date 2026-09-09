class Solution {
public:
    int expand( string s , int left , int right ){
        while( left >=0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }

        return right - left - 1 ;
    }
    string longestPalindrome(string s) {
        
        if(s.empty()){
            return "";
        }

        int n = s.size();
        int start = 0 , maxlen = 0 ;
        for( int i=0 ; i<n ; i++){

            int len1 = expand( s , i , i);
            int len2 = expand( s , i , i+1);

            int currlen = max( len1 , len2 );
            if( currlen > maxlen ){
                maxlen = currlen ;

                start = i - (currlen - 1)/2 ;
            }
        }

        return s.substr(start , maxlen);
    }
};