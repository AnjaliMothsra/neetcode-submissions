class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int currPrefixSum =0, count =0;
         unordered_map<int,int> mpp;
         mpp[0] = 1;
         for(int i=0;i<nums.size();i++){
            currPrefixSum += nums[i];
            int remove = currPrefixSum - k;
            if(mpp.find(remove) != mpp.end()){
                count += mpp[remove];
            }
            mpp[currPrefixSum] +=1;
         }
         return count;
    }
};