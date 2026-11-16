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
/*
right - left + 1 = number of indices/elements in the current window.
window.size() = number of unique values stored in the set.

i.g:
nums[] ={1,2,1}
window will contains : [1,2,1]
but our set is only unique values: {1,2}
*/