class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length() ;
        int n2 = s2.length() ;

        sort(s1.begin(),s1.end());

        for (int i=0 ; i<= n2-n1 ; i++){
               string s ="";
            for(int j=i; j< i+n1 ;j++){
                 s = s + s2[j];
            }

            sort(s.begin(),s.end());
            if( s1 == s) {
                return true;
            }

        }

        return false;
    }
};
