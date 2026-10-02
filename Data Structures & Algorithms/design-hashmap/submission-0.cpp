class MyHashMap {
private:
   static const int size = 1000;
   vector<list<pair<int,int>>> buckets;
   int hashFuc(int key){
    return key % size;
   }
public:
    MyHashMap() : buckets(size) {}
    
    void put(int key, int value) {
        int position = hashFuc(key);
        for(auto &it : buckets[position]){
            if(it.first == key){
                it.second = value;
                return ;
            }
        }
        buckets[position].push_back({key,value});
    }
    
    int get(int key) {
        int position = hashFuc(key);
        for(auto &it : buckets[position]){
            if(it.first == key) return it.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int position = hashFuc(key);
        list<pair<int,int>> newList;
        for(auto &it : buckets[position]){
            if(it.first != key){
                newList.push_back(it);
            }
        }
        buckets[position] = newList;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */