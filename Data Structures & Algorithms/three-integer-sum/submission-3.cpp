class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i> 0 && nums[i] == nums[i-1])continue;
            int j = i+1;
            int k = n-1;
        while(j<k){
            int sum = nums[i]+ nums[j]+ nums[k];
            if(sum == 0 && st.find({nums[i],nums[j],nums[k]}) == st.end()){
                st.insert({nums[i],nums[j],nums[k]});
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }else if (sum < 0){
                j++;
            }else{
                k--;
            }
        }
    }
        return ans;
    }
};
