class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int> freq(26 , 0);

        for(char c : tasks){
            freq[c - 'A']++;
        }

        int maxfreq = 0 ;
        for(int i : freq){
            maxfreq = max(maxfreq , i);
        }

        int maxfreqelemt = 0 ;
        for(int i : freq){
            if( i==maxfreq){
                maxfreqelemt++;
            }
        }

        int ans = (maxfreq - 1 ) * (n+1) + maxfreqelemt ;
        return max(ans , static_cast<int>(tasks.size()));
        }
};
