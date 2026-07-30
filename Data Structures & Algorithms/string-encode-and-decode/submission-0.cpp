class Solution {
public:

    // Encode
    string encode(vector<string>& strs) {

        string ans = "";

        for (string s : strs) {

            ans += to_string(s.size());
            ans += "#";
            ans += s;
        }

        return ans;
    }

    // Decode
    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            // Length of string
            int len = stoi(s.substr(i, j - i));

            // Actual string
            string word = s.substr(j + 1, len);

            ans.push_back(word);

            // Move to next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};