class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){ // <--- TC: ant low extra space and can modify the array → Sort → O(n log n)
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
    //    unordered_map<int,int> occur;
    //    for(int i=0;i<nums.size();i++){
    //     occur[nums[i]]++;
    //    } // <-- TC:Need duplicate detection quickly → Hash Set/Map → O(n) average,extra space : o(n)

    //    for(auto it : occur){
    //     if(it.second > 1) return true;
    //    }
        return false;
    }
};