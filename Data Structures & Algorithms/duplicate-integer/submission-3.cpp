class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> occur;
        for(int x: nums){
            occur[x]++;
        }
        for(auto it : occur){
            if(it.second > 1) return true;
        }
        return false;
    }
};