class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0 ;

        for(int i=0 ; i<s.length()-1 ; i++){
            int num = abs(static_cast<int>(s[i+1]) - static_cast<int>(s[i]));
            sum += num ;
        }

        return sum ;
    }
};