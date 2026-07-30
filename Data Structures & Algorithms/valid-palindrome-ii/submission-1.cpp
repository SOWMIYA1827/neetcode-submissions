class Solution {
public:
    bool validPalindrome(string s) {
        if(ispalindrome(s)){
            return true;
        }

        for(int i=0 ; i<s.size() ; i++){
            string n = s.substr(0,i) + s.substr(i+1);
            if(ispalindrome(n)){
                return true;
            }
        }

        return false;
}

private:
 bool ispalindrome(string s){
    int left = 0 , right = s.size()-1 ;
    while( left < right ){
        if (s[left] != s[right]){
            return false;
        }
        left ++;
        right --;
    }
    return true;
 }
 };
