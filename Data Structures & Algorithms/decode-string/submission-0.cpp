class Solution {
public:
    string decodeString(string s) {

        stack<pair<string, int>> st;

        string current = "";
        int number = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                number = number * 10 + (ch - '0');
            }

            else if (ch == '[') {
                st.push({current, number});
                current = "";
                number = 0;
            }

            else if (ch == ']') {

                auto top = st.top();
                st.pop();

                string previous = top.first;
                int repeat = top.second;

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }

                current = previous + temp;
            }

            else {
                current += ch;
            }
        }

        return current;
    }
};