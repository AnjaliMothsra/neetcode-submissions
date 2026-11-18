class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
         int left=0;
         for(int right=0;right<nums.size();right++){
            if(window.size() <= k){
                if(window.find(nums[right]) == window.end()){
                    window.insert(nums[right]);
                }else return true;
            }
            if(window.size() > k){
                window.erase(nums[left]);
                left++;
            }
         }
         return false;
    }
};