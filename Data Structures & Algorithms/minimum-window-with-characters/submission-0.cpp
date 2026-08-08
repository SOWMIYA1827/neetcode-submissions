class Solution {
public:
    string minWindow(string s, string t) {
    int m = s.length();
    int n = t.length();

    int start = 0;
    int minLength = INT_MAX;

    if (n > m) {
      return "";
    }

    unordered_map<char, int> need;
    unordered_map<char, int> window;

    // Store frequency of characters in t
    for (char c : t) {
        need[c]++;
    }

    int left = 0;
    int formed = 0;

    for (int right = 0; right < m; right++) {

        char x = s[right];
        window[x]++;

        if (need.count(x) && window[x] == need[x]) {
            formed++;
        }

        while (formed == need.size()) {

            if (right - left + 1 < minLength) {
                minLength = right - left + 1;
                start = left;
            }

            char ch = s[left];
            window[ch]--;

            if (need.count(ch) && window[ch] < need[ch]) {
                formed--;
            }

            left++;
        }
    }

    if( minLength == INT_MAX){
        return "";
    }
    
    return s.substr(start,minLength);
    }
};