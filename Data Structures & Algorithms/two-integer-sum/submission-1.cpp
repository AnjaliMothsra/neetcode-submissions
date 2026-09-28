class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //optimal solution :
        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
            int need  = target - nums[i];
            if(mp.find(need) != mp.end()){
                return {mp[need],i};
            }else{
              mp[nums[i]] = i;
            }
        }
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] + nums[j] == target){ // Time complexity : O(n*2)
        //             return {i,j};
        //         }
        //     }
        // }
        return {};
        
    }
};
