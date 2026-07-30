class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int asteroid : asteroids) {

            // Positive asteroid: always push
            if (asteroid > 0) {
                st.push(asteroid);
            }
            else {

                // Destroy all smaller positive asteroids
                while (!st.empty() &&
                       st.top() > 0 &&
                       st.top() < abs(asteroid)) {
                    st.pop();
                }

                // If stack is empty or top is negative,
                // current asteroid survives
                if (st.empty() || st.top() < 0) {
                    st.push(asteroid);
                }
                // Equal size: both explode
                else if (st.top() == abs(asteroid)) {
                    st.pop();
                }
                // Else:
                // st.top() > abs(asteroid)
                // Current asteroid is destroyed, so do nothing
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};