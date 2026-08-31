class FreqStack {

    unordered_map<int , int> freqmap ;

    unordered_map<int , stack<int>> groupfrq ;

    int maxfreq ;

public:
    FreqStack() {
        maxfreq = 0 ;
    }
    
    void push(int val) {
        
        int currfreq = freqmap[val]++;

        if(currfreq > maxfreq){
            maxfreq =currfreq ;
        }

        groupfrq[currfreq].push(val) ;
    }
    
    int pop() {
        
        int mostfrevalue = groupfrq[maxfreq].top();
        groupfrq[maxfreq].pop();

        freqmap[mostfrevalue]--;

        if(groupfrq[maxfreq].empty()){
            maxfreq--;
        }

        return mostfrevalue ;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */