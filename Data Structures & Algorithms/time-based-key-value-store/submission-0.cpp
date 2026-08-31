struct TimeEntry {
    int timestamp ;
    string value ;
};

class TimeMap {
private:
    unordered_map<string , vector<TimeEntry>> storage ;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        TimeEntry newvalue = {timestamp , value };
        storage[key].push_back(newvalue);
    }
    
    string get(string key, int timestamp) {
        if( storage.find(key) == storage.end()){
            return "";
        }

        const vector<TimeEntry>& histroy = storage[key];
        int low = 0 , high = histroy.size()-1 ;
        string result ="";

        while( low <= high ){
            int mid = low + (high - low )/2 ;
            
            if(histroy[mid].timestamp <= timestamp){
                result = histroy[mid].value;
                low = mid+1 ;
            }
            else{
                high = mid - 1 ;
            }
        }

        return result ;
    }
};
