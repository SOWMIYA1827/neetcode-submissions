class MyHashMap {
    private:
    unordered_map<int,int> obj;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        obj[key] = value;
    }
    
    int get(int key) {
        if (obj.find(key) != obj.end()){
            return obj[key];
        }
        return -1;
    }
    
    void remove(int key) {
        obj.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */