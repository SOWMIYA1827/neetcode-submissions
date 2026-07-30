class MyHashSet {
    private:
    unordered_set<int> obj;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        obj.insert(key);
    }
    
    void remove(int key) {
        obj.erase(key);
    }
    
    bool contains(int key) {
        if (obj.find(key) != obj.end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */