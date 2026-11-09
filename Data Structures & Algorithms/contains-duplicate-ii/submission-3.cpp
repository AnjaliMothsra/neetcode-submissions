class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_set<int> window;
       int left =0;
       for(int right =0;right<nums.size();right++){
        if(window.size() <= k){
            if(window.count(nums[right]) == 0){
                window.insert(nums[right]);
            }else return true;
        }
        if(right - left +1 > k){
            window.erase(nums[left]);
            left++;
        }
       }
       return false;
    }
};