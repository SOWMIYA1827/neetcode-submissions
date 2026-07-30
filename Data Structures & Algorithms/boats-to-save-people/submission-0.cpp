class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int l = 0, r = people.size() - 1;
        int count = 0;

        while (l <= r) {
            if (people[l] + people[r] <= limit) {
                l++;  // light person join
            }
            r--;      // heavy always goes
            count++;  // one boat used
        }

        return count;
    }
};