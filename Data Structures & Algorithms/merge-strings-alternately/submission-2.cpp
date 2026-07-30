class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int l=0 , r=0 ;
      string s ="";
      while ( l<word1.size() && r<word2.size()){
        s += word1[l] ;
        s += word2[r] ;
        l++ , r++;
      }
        while (l < word1.size()){
          s += word1[l];
          l++;
        }

        while (r < word2.size()){
          s += word2[r];
          r++;
        }


      return s;
    }
};