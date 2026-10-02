class MyHashSet {
private:
   static const int size = 10000;
   vector<list<int>> buckets;
   int hashFuc(int key){
    return key%size;
   }
public:
    MyHashSet(): buckets(size){}
    
    void add(int key) {
       int position = hashFuc(key);
       for(int val : buckets[position]){
        if(val == key)return;
       }
       buckets[position].push_back(key);
    }
    
    void remove(int key) {
        int position = hashFuc(key);
        list<int> newList;
        for(int val : buckets[position]){
            if(val != key){
                newList.push_back(val);
            }
        }
        buckets[position] = newList;
    }
    
    bool contains(int key) {
       int position = hashFuc(key);
       for(int val : buckets[position]){
        if(val == key) return true;
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