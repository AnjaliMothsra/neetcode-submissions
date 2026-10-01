class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> occur;
        for(int i=0;i<n;i++){
            occur[nums[i]]++;
        }
        for(auto it : occur){
            if(it.second > n/2){
                return it.first;
            }
        }
        return -1;
    }
};