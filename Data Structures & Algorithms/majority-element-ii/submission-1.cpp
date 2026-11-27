class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n = nums.size();
        int  mn= (n/3)+1;
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int x : nums){
            mpp[x]++;
            if(mpp[x] == mn){
                ans.push_back(x);
            }
        }
        return ans;
    }
};