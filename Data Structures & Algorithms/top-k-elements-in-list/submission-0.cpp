class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        unordered_set<int> st;       
        int key=0;
        while(k--){
            int mx=0;
        for(auto it : mp){
            if(mx < it.second && st.find(it.first) == st.end()){
               mx = max(mx, it.second);
                key = it.first;
            }
        }
        st.insert(key);
        ans.push_back(key);
     }
        return ans;
//TC: O(m + k) → worst case O(n).
//The important reason of solution becomes O(n²) is repeatedly scanning the whole frequency map to find the next maximum.
    }
};
